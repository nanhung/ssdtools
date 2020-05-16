// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dburrXII_
NumericVector dburrXII_(NumericVector x, double shape1, double shape2, double scale, bool log_);
RcppExport SEXP _ssdtools_dburrXII_(SEXP xSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP scaleSEXP, SEXP log_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type log_(log_SEXP);
    rcpp_result_gen = Rcpp::wrap(dburrXII_(x, shape1, shape2, scale, log_));
    return rcpp_result_gen;
END_RCPP
}
// dgumbel_cpp
NumericVector dgumbel_cpp(NumericVector x, NumericVector location, NumericVector scale, bool log_cpp);
RcppExport SEXP _ssdtools_dgumbel_cpp(SEXP xSEXP, SEXP locationSEXP, SEXP scaleSEXP, SEXP log_cppSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type location(locationSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type log_cpp(log_cppSEXP);
    rcpp_result_gen = Rcpp::wrap(dgumbel_cpp(x, location, scale, log_cpp));
    return rcpp_result_gen;
END_RCPP
}
// pgumbel_cpp
NumericVector pgumbel_cpp(NumericVector q, NumericVector location, NumericVector scale);
RcppExport SEXP _ssdtools_pgumbel_cpp(SEXP qSEXP, SEXP locationSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type location(locationSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(pgumbel_cpp(q, location, scale));
    return rcpp_result_gen;
END_RCPP
}
// qgumbel_cpp
NumericVector qgumbel_cpp(NumericVector p, NumericVector location, NumericVector scale);
RcppExport SEXP _ssdtools_qgumbel_cpp(SEXP pSEXP, SEXP locationSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type location(locationSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(qgumbel_cpp(p, location, scale));
    return rcpp_result_gen;
END_RCPP
}
// rgumbel_cpp
NumericVector rgumbel_cpp(int n, NumericVector location, NumericVector scale);
RcppExport SEXP _ssdtools_rgumbel_cpp(SEXP nSEXP, SEXP locationSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type location(locationSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(rgumbel_cpp(n, location, scale));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ssdtools_dburrXII_", (DL_FUNC) &_ssdtools_dburrXII_, 5},
    {"_ssdtools_dgumbel_cpp", (DL_FUNC) &_ssdtools_dgumbel_cpp, 4},
    {"_ssdtools_pgumbel_cpp", (DL_FUNC) &_ssdtools_pgumbel_cpp, 3},
    {"_ssdtools_qgumbel_cpp", (DL_FUNC) &_ssdtools_qgumbel_cpp, 3},
    {"_ssdtools_rgumbel_cpp", (DL_FUNC) &_ssdtools_rgumbel_cpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_ssdtools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
