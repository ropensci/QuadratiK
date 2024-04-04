// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// computeKernelMatrix
Eigen::MatrixXd computeKernelMatrix(const Eigen::MatrixXd& x_mat, const Eigen::MatrixXd& y_mat, const Eigen::MatrixXd& H);
RcppExport SEXP _QuadratiK_computeKernelMatrix(SEXP x_matSEXP, SEXP y_matSEXP, SEXP HSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type x_mat(x_matSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type y_mat(y_matSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type H(HSEXP);
    rcpp_result_gen = Rcpp::wrap(computeKernelMatrix(x_mat, y_mat, H));
    return rcpp_result_gen;
END_RCPP
}
// computePoissonMatrix
Eigen::MatrixXd computePoissonMatrix(const Eigen::MatrixXd& x_mat, double rho);
RcppExport SEXP _QuadratiK_computePoissonMatrix(SEXP x_matSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type x_mat(x_matSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(computePoissonMatrix(x_mat, rho));
    return rcpp_result_gen;
END_RCPP
}
// NonparamCentering
Eigen::MatrixXd NonparamCentering(const Eigen::MatrixXd& kmat_zz, int n_z);
RcppExport SEXP _QuadratiK_NonparamCentering(SEXP kmat_zzSEXP, SEXP n_zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type kmat_zz(kmat_zzSEXP);
    Rcpp::traits::input_parameter< int >::type n_z(n_zSEXP);
    rcpp_result_gen = Rcpp::wrap(NonparamCentering(kmat_zz, n_z));
    return rcpp_result_gen;
END_RCPP
}
// ParamCentering
Eigen::MatrixXd ParamCentering(const Eigen::MatrixXd& kmat_zz, const Eigen::MatrixXd& z_mat, const Eigen::MatrixXd& H, const Eigen::MatrixXd& mu_hat, const Eigen::MatrixXd& Sigma_hat);
RcppExport SEXP _QuadratiK_ParamCentering(SEXP kmat_zzSEXP, SEXP z_matSEXP, SEXP HSEXP, SEXP mu_hatSEXP, SEXP Sigma_hatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type kmat_zz(kmat_zzSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type z_mat(z_matSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type H(HSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type mu_hat(mu_hatSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Sigma_hat(Sigma_hatSEXP);
    rcpp_result_gen = Rcpp::wrap(ParamCentering(kmat_zz, z_mat, H, mu_hat, Sigma_hat));
    return rcpp_result_gen;
END_RCPP
}
// stat2sample
double stat2sample(Eigen::MatrixXd& x_mat, Eigen::MatrixXd& y_mat, double h, const Eigen::VectorXd& mu_hat, const Eigen::MatrixXd& Sigma_hat, const std::string& centeringType);
RcppExport SEXP _QuadratiK_stat2sample(SEXP x_matSEXP, SEXP y_matSEXP, SEXP hSEXP, SEXP mu_hatSEXP, SEXP Sigma_hatSEXP, SEXP centeringTypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type x_mat(x_matSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type y_mat(y_matSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type mu_hat(mu_hatSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Sigma_hat(Sigma_hatSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type centeringType(centeringTypeSEXP);
    rcpp_result_gen = Rcpp::wrap(stat2sample(x_mat, y_mat, h, mu_hat, Sigma_hat, centeringType));
    return rcpp_result_gen;
END_RCPP
}
// kbNormTest
Eigen::VectorXd kbNormTest(Eigen::MatrixXd x_mat, double h, const Eigen::VectorXd& mu_hat, const Eigen::MatrixXd Sigma_hat);
RcppExport SEXP _QuadratiK_kbNormTest(SEXP x_matSEXP, SEXP hSEXP, SEXP mu_hatSEXP, SEXP Sigma_hatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type x_mat(x_matSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type mu_hat(mu_hatSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type Sigma_hat(Sigma_hatSEXP);
    rcpp_result_gen = Rcpp::wrap(kbNormTest(x_mat, h, mu_hat, Sigma_hat));
    return rcpp_result_gen;
END_RCPP
}
// statPoissonUnif
Eigen::VectorXd statPoissonUnif(const Eigen::MatrixXd& x_mat, double rho);
RcppExport SEXP _QuadratiK_statPoissonUnif(SEXP x_matSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type x_mat(x_matSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(statPoissonUnif(x_mat, rho));
    return rcpp_result_gen;
END_RCPP
}
// stat_ksample_cpp
Eigen::VectorXd stat_ksample_cpp(const Eigen::MatrixXd& x, const Eigen::VectorXd& y, double h, const Eigen::VectorXd& sizes, const Eigen::VectorXd& cum_size);
RcppExport SEXP _QuadratiK_stat_ksample_cpp(SEXP xSEXP, SEXP ySEXP, SEXP hSEXP, SEXP sizesSEXP, SEXP cum_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type sizes(sizesSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type cum_size(cum_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(stat_ksample_cpp(x, y, h, sizes, cum_size));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_QuadratiK_computeKernelMatrix", (DL_FUNC) &_QuadratiK_computeKernelMatrix, 3},
    {"_QuadratiK_computePoissonMatrix", (DL_FUNC) &_QuadratiK_computePoissonMatrix, 2},
    {"_QuadratiK_NonparamCentering", (DL_FUNC) &_QuadratiK_NonparamCentering, 2},
    {"_QuadratiK_ParamCentering", (DL_FUNC) &_QuadratiK_ParamCentering, 5},
    {"_QuadratiK_stat2sample", (DL_FUNC) &_QuadratiK_stat2sample, 6},
    {"_QuadratiK_kbNormTest", (DL_FUNC) &_QuadratiK_kbNormTest, 4},
    {"_QuadratiK_statPoissonUnif", (DL_FUNC) &_QuadratiK_statPoissonUnif, 2},
    {"_QuadratiK_stat_ksample_cpp", (DL_FUNC) &_QuadratiK_stat_ksample_cpp, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_QuadratiK(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
