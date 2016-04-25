// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fps
List fps(NumericMatrix S, double ndim, int nsol, int maxnvar, double lambdamin, NumericVector lambda, int maxiter, double tolerance, int verbose);
RcppExport SEXP fps_fps(SEXP SSEXP, SEXP ndimSEXP, SEXP nsolSEXP, SEXP maxnvarSEXP, SEXP lambdaminSEXP, SEXP lambdaSEXP, SEXP maxiterSEXP, SEXP toleranceSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type S(SSEXP);
    Rcpp::traits::input_parameter< double >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< int >::type nsol(nsolSEXP);
    Rcpp::traits::input_parameter< int >::type maxnvar(maxnvarSEXP);
    Rcpp::traits::input_parameter< double >::type lambdamin(lambdaminSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(fps(S, ndim, nsol, maxnvar, lambdamin, lambda, maxiter, tolerance, verbose));
    return __result;
END_RCPP
}
