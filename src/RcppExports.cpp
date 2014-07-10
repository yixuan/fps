// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fps
List fps(NumericMatrix S, double ndim, NumericVector lambda = NumericVector::create(), int nsol = 50, double lambdamin = -1, int maxnvar = -1, int maxiter = 100, double tolerance = 1e-3, int verbose = 0);
RcppExport SEXP fps_fps(SEXP SSEXP, SEXP ndimSEXP, SEXP lambdaSEXP, SEXP nsolSEXP, SEXP lambdaminSEXP, SEXP maxnvarSEXP, SEXP maxiterSEXP, SEXP toleranceSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type S(SSEXP );
        Rcpp::traits::input_parameter< double >::type ndim(ndimSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP );
        Rcpp::traits::input_parameter< int >::type nsol(nsolSEXP );
        Rcpp::traits::input_parameter< double >::type lambdamin(lambdaminSEXP );
        Rcpp::traits::input_parameter< int >::type maxnvar(maxnvarSEXP );
        Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP );
        Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP );
        Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP );
        List __result = fps(S, ndim, lambda, nsol, lambdamin, maxnvar, maxiter, tolerance, verbose);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// svps
List svps(NumericMatrix x, double ndim, NumericVector lambda = NumericVector::create(), int nsol = 50, double lambdamin = -1, double lambdaminratio = -1, int maxnrow = -1, int maxncol = -1, int maxiter = 100, double tolerance = 1e-3, int verbose = 0);
RcppExport SEXP fps_svps(SEXP xSEXP, SEXP ndimSEXP, SEXP lambdaSEXP, SEXP nsolSEXP, SEXP lambdaminSEXP, SEXP lambdaminratioSEXP, SEXP maxnrowSEXP, SEXP maxncolSEXP, SEXP maxiterSEXP, SEXP toleranceSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP );
        Rcpp::traits::input_parameter< double >::type ndim(ndimSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP );
        Rcpp::traits::input_parameter< int >::type nsol(nsolSEXP );
        Rcpp::traits::input_parameter< double >::type lambdamin(lambdaminSEXP );
        Rcpp::traits::input_parameter< double >::type lambdaminratio(lambdaminratioSEXP );
        Rcpp::traits::input_parameter< int >::type maxnrow(maxnrowSEXP );
        Rcpp::traits::input_parameter< int >::type maxncol(maxncolSEXP );
        Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP );
        Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP );
        Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP );
        List __result = svps(x, ndim, lambda, nsol, lambdamin, lambdaminratio, maxnrow, maxncol, maxiter, tolerance, verbose);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
