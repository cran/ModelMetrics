// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// auc_
double auc_(NumericVector actual, NumericVector predicted, NumericVector ranks);
RcppExport SEXP ModelMetrics_auc_(SEXP actualSEXP, SEXP predictedSEXP, SEXP ranksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ranks(ranksSEXP);
    rcpp_result_gen = Rcpp::wrap(auc_(actual, predicted, ranks));
    return rcpp_result_gen;
END_RCPP
}
// confusionMatrix_
NumericMatrix confusionMatrix_(NumericVector actual, NumericVector predicted, double cutoff);
RcppExport SEXP ModelMetrics_confusionMatrix_(SEXP actualSEXP, SEXP predictedSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(confusionMatrix_(actual, predicted, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// ppv_
double ppv_(NumericVector actual, NumericVector predicted, double cutoff);
RcppExport SEXP ModelMetrics_ppv_(SEXP actualSEXP, SEXP predictedSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(ppv_(actual, predicted, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// npv_
double npv_(NumericVector actual, NumericVector predicted, double cutoff);
RcppExport SEXP ModelMetrics_npv_(SEXP actualSEXP, SEXP predictedSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(npv_(actual, predicted, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// tnr_
double tnr_(NumericVector actual, NumericVector predicted, double cutoff);
RcppExport SEXP ModelMetrics_tnr_(SEXP actualSEXP, SEXP predictedSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(tnr_(actual, predicted, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// recall_
double recall_(NumericVector actual, NumericVector predicted, double cutoff);
RcppExport SEXP ModelMetrics_recall_(SEXP actualSEXP, SEXP predictedSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(recall_(actual, predicted, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// f1Score_
double f1Score_(NumericVector actual, NumericVector predicted, double cutoff);
RcppExport SEXP ModelMetrics_f1Score_(SEXP actualSEXP, SEXP predictedSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(f1Score_(actual, predicted, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// brier_
double brier_(NumericVector actual, NumericVector predicted);
RcppExport SEXP ModelMetrics_brier_(SEXP actualSEXP, SEXP predictedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    rcpp_result_gen = Rcpp::wrap(brier_(actual, predicted));
    return rcpp_result_gen;
END_RCPP
}
// mcc_
double mcc_(NumericVector actual, NumericVector predicted, double cutoff);
RcppExport SEXP ModelMetrics_mcc_(SEXP actualSEXP, SEXP predictedSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(mcc_(actual, predicted, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// mae_
double mae_(NumericVector actual, NumericVector predicted);
RcppExport SEXP ModelMetrics_mae_(SEXP actualSEXP, SEXP predictedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    rcpp_result_gen = Rcpp::wrap(mae_(actual, predicted));
    return rcpp_result_gen;
END_RCPP
}
// ce_
double ce_(NumericVector actual, NumericVector predicted);
RcppExport SEXP ModelMetrics_ce_(SEXP actualSEXP, SEXP predictedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    rcpp_result_gen = Rcpp::wrap(ce_(actual, predicted));
    return rcpp_result_gen;
END_RCPP
}
// mse_
double mse_(NumericVector actual, NumericVector predicted);
RcppExport SEXP ModelMetrics_mse_(SEXP actualSEXP, SEXP predictedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    rcpp_result_gen = Rcpp::wrap(mse_(actual, predicted));
    return rcpp_result_gen;
END_RCPP
}
// msle_
double msle_(NumericVector actual, NumericVector predicted);
RcppExport SEXP ModelMetrics_msle_(SEXP actualSEXP, SEXP predictedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    rcpp_result_gen = Rcpp::wrap(msle_(actual, predicted));
    return rcpp_result_gen;
END_RCPP
}
// rmsle_
double rmsle_(NumericVector actual, NumericVector predicted);
RcppExport SEXP ModelMetrics_rmsle_(SEXP actualSEXP, SEXP predictedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    rcpp_result_gen = Rcpp::wrap(rmsle_(actual, predicted));
    return rcpp_result_gen;
END_RCPP
}
// rmse_
double rmse_(NumericVector actual, NumericVector predicted);
RcppExport SEXP ModelMetrics_rmse_(SEXP actualSEXP, SEXP predictedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    rcpp_result_gen = Rcpp::wrap(rmse_(actual, predicted));
    return rcpp_result_gen;
END_RCPP
}
// logLoss_
double logLoss_(NumericVector actual, NumericVector predicted);
RcppExport SEXP ModelMetrics_logLoss_(SEXP actualSEXP, SEXP predictedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    rcpp_result_gen = Rcpp::wrap(logLoss_(actual, predicted));
    return rcpp_result_gen;
END_RCPP
}
// mlogLoss_
double mlogLoss_(NumericVector actual, NumericMatrix predicted);
RcppExport SEXP ModelMetrics_mlogLoss_(SEXP actualSEXP, SEXP predictedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type predicted(predictedSEXP);
    rcpp_result_gen = Rcpp::wrap(mlogLoss_(actual, predicted));
    return rcpp_result_gen;
END_RCPP
}
// plogLoss_
double plogLoss_(NumericVector actual, NumericVector predicted);
RcppExport SEXP ModelMetrics_plogLoss_(SEXP actualSEXP, SEXP predictedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type predicted(predictedSEXP);
    rcpp_result_gen = Rcpp::wrap(plogLoss_(actual, predicted));
    return rcpp_result_gen;
END_RCPP
}
