//
// mat.h
// 
// Copyright 2014 Vincent Q. Vu. All rights reserved
//

#ifndef __BLOCKMAT_H
#define __BLOCKMAT_H

#include <RcppArmadillo.h>
#include <list>
#include <map>
#include "base.h"

typedef BlockBase<arma::vec> BlockVec;

class BlockMat : public BlockBase<arma::mat> {
public:
  BlockMat& operator*=(const double& rhs) {
    for (auto& x : blocks) { x *= rhs; }
    return *this;
  }

  template <typename functor>
  inline const BlockMat& transform(functor F) {
    for (auto& x : blocks) { x.transform(F); }
    return *this;
  }

  friend double dot(const BlockMat& a, const BlockMat& b);
  friend double dotsquare(const BlockMat& a, const BlockMat& b);
  friend double tdotsquare(const BlockMat& a, const BlockMat& b);
  friend double dist(const BlockMat& a, const BlockMat& b);

  friend double sumabs(const BlockMat&);
  friend void svd(BlockMat& u, BlockVec& s, BlockMat& v, const BlockMat& x);
  friend void eig_sym(BlockVec& eigval, BlockMat& eigvec, const BlockMat& x);
};

template <typename Key>
class BlockMap : public BlockMat {

public:
  typedef std::pair<arma::uvec, arma::uvec> index_t;
  typedef typename std::map<Key, index_t> indexmap_t;

  BlockMap(const arma::mat& X, const indexmap_t& indexmap) {
    for (const auto& i : indexmap) {
      if(i.second.first.n_elem == 0 || i.second.second.n_elem == 0) {
        continue;
      }
      arma::mat b = X.submat(i.second.first, i.second.second);
      blocks.push_back(std::move(b));
      indices.push_back(i.second);
    }
  }

  void copy_to(arma::mat& X) const {
    auto i = indices.cbegin();
    for (auto b = blocks.cbegin(); b != blocks.cend(); ++b, ++i) {
      X.submat(i->first, i->second) = *b;
    }
  }

protected:
  std::list<index_t> indices;
};

template <typename Key>
class SymBlockMap : public BlockMat {

public:
  typedef arma::uvec index_t;
  typedef typename std::map<Key, index_t> indexmap_t;

  SymBlockMap(const arma::mat& X, const indexmap_t& indexmap) {
    for (const auto& i : indexmap) {
      arma::mat b = X.submat(i.second, i.second);
      blocks.push_back(std::move(b));
      indices.push_back(i.second);
    }
  }

  void copy_to(arma::mat& X) const {
    auto i = indices.cbegin();
    for (auto b = blocks.cbegin(); b != blocks.cend(); ++b, ++i) {
      X.submat(*i, *i) = *b;
    }
  }

protected:
  std::list<index_t> indices;
};

#endif