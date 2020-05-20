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
// dgamma_ssd
double dgamma_ssd(double x, double shape, double scale, bool log_ssd);
RcppExport SEXP _ssdtools_dgamma_ssd(SEXP xSEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP log_ssdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type log_ssd(log_ssdSEXP);
    rcpp_result_gen = Rcpp::wrap(dgamma_ssd(x, shape, scale, log_ssd));
    return rcpp_result_gen;
END_RCPP
}
// pgamma_ssd
double pgamma_ssd(double q, double shape, double scale);
RcppExport SEXP _ssdtools_pgamma_ssd(SEXP qSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(pgamma_ssd(q, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// qgamma_ssd
double qgamma_ssd(double p, double shape, double scale);
RcppExport SEXP _ssdtools_qgamma_ssd(SEXP pSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(qgamma_ssd(p, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// rgamma_ssd
NumericVector rgamma_ssd(int n, double shape, double scale);
RcppExport SEXP _ssdtools_rgamma_ssd(SEXP nSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(rgamma_ssd(n, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// dgumbel_ssd
double dgumbel_ssd(double x, double location, double scale, bool log_ssd);
RcppExport SEXP _ssdtools_dgumbel_ssd(SEXP xSEXP, SEXP locationSEXP, SEXP scaleSEXP, SEXP log_ssdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type location(locationSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type log_ssd(log_ssdSEXP);
    rcpp_result_gen = Rcpp::wrap(dgumbel_ssd(x, location, scale, log_ssd));
    return rcpp_result_gen;
END_RCPP
}
// pgumbel_ssd
double pgumbel_ssd(double q, double location, double scale);
RcppExport SEXP _ssdtools_pgumbel_ssd(SEXP qSEXP, SEXP locationSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type location(locationSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(pgumbel_ssd(q, location, scale));
    return rcpp_result_gen;
END_RCPP
}
// qgumbel_ssd
double qgumbel_ssd(double p, double location, double scale);
RcppExport SEXP _ssdtools_qgumbel_ssd(SEXP pSEXP, SEXP locationSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type location(locationSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(qgumbel_ssd(p, location, scale));
    return rcpp_result_gen;
END_RCPP
}
// rgumbel_ssd
NumericVector rgumbel_ssd(int n, double location, double scale);
RcppExport SEXP _ssdtools_rgumbel_ssd(SEXP nSEXP, SEXP locationSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type location(locationSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(rgumbel_ssd(n, location, scale));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ssdtools_dburrXII_", (DL_FUNC) &_ssdtools_dburrXII_, 5},
    {"_ssdtools_dgamma_ssd", (DL_FUNC) &_ssdtools_dgamma_ssd, 4},
    {"_ssdtools_pgamma_ssd", (DL_FUNC) &_ssdtools_pgamma_ssd, 3},
    {"_ssdtools_qgamma_ssd", (DL_FUNC) &_ssdtools_qgamma_ssd, 3},
    {"_ssdtools_rgamma_ssd", (DL_FUNC) &_ssdtools_rgamma_ssd, 3},
    {"_ssdtools_dgumbel_ssd", (DL_FUNC) &_ssdtools_dgumbel_ssd, 4},
    {"_ssdtools_pgumbel_ssd", (DL_FUNC) &_ssdtools_pgumbel_ssd, 3},
    {"_ssdtools_qgumbel_ssd", (DL_FUNC) &_ssdtools_qgumbel_ssd, 3},
    {"_ssdtools_rgumbel_ssd", (DL_FUNC) &_ssdtools_rgumbel_ssd, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_ssdtools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
