#ifndef __FPS_H
#define __FPS_H

#include <RcppArmadillo.h>

Rcpp::List fps(Rcpp::NumericMatrix S, double ndim, unsigned int nsol = 50,
               unsigned int maxblocksize = 0, 
               double lambdaminratio = -1, double lambdamin = -1,
               Rcpp::NumericVector lambda = Rcpp::NumericVector::create(),
               int maxiter = 100, double tolerance = 1e-3, int verbose = 0);

#endif