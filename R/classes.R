#' @rdname kb.test-class
#'
#' @title An S4 class for kernel-based distance tests with normal kernel
#'
#' @description A class to represent the results of Gaussian kernel-based 
#' quadratic distance tests. This includes the normality test, the two-sample 
#' test statistics and the k-sample tests.
#'
#' @slot method String indicating the kernel-based quadratic distance 
#'              test performed.
#' @slot Un The value of the test U-statistic.
#' @slot Vn The value of the test V-statistic.
#' @slot Dn The value of the statistic Dn.
#' @slot Trace The value of the trace statistic.
#' @slot H0_Un A logical value indicating whether or not the null hypothesis is
#'          rejected according to U-statistic.
#' @slot H0_Vn A logical value indicating whether or not the null hypothesis is 
#'          rejected according to Vn.
#' @slot H0_Dn A logical value indicating whether or not the null hypothesis is
#'          rejected according to Dn-statistic.
#' @slot H0_Trace A logical value indicating whether or not the null 
#'          hypothesis is rejected according to Trace-statistic.
#' @slot data List of samples X (and Y).
#' @slot CV_Un The critical value computed for the test Un.
#' @slot CV_Vn The critical value computed for the test Vn.
#' @slot CV_Dn The critical value computed for the test Dn.
#' @slot CV_Trace The critical value computed for the trace.
#' @slot cv_method The method used to estimate the critical value (one of
#' "subsampling", "permutation" or "bootstrap").
#' @slot h A list with the value of bandwidth parameter used for the Gaussian 
#'         kernel. If the function \code{select_h} is used, then also the matrix
#'         of computed power values and the resulting power plot are provided. 
#' @slot B Number of bootstrap/permutation/subsampling replications.
#' @slot var_Un Exact variance of the kernel-based U-statistic.
#' @slot var_Dn Exact variance of the kernel-based Dn-statistic.
#' @slot var_Trace Exact variance of the kernel-based Trace-statistic.
#'
#' @examples
#' # create a kb.test object
#' x <- matrix(rnorm(100), ncol = 2)
#' y <- matrix(rnorm(100), ncol = 2)
#' # Normality test
#' kb.test(x, h = 0.5, mu = c(0,0), Sigma = diag(2))
#' 
#' # Two-sample test
#' kb.test(x, y, h=0.5, method = "subsampling", b = 0.9)
#' 
#' @srrstats {G1.4} roxigen2 is used
#' 
#' @seealso [kb.test()] for the function that generates this class.
#' 
#' @noRd
setClass("kb.test",
         slots = list(
            method = "character",
            Un = "numeric",
            Vn = "numeric",
            Dn = "numeric",
            Trace = "numeric",
            CV_Un = "numeric",
            CV_Vn = "numeric",
            CV_Dn = "numeric",
            CV_Trace = "numeric",
            H0_Un = "logical",
            H0_Vn = "logical",
            H0_Dn = "logical",
            H0_Trace = "logical",
            data = "list",
            cv_method = "character",
            B = "numeric",
            h = "list",
            var_Un = "numeric",
            var_Dn = "numeric",
            var_Trace = "numeric"
         )
)
#' @rdname pk.test-class
#'
#' @title An S4 class for Poisson kernel-based quadratic distance tests.
#'
#' @description A class to represent the results of Poisson kernel-based 
#'              quadratic distance tests for Uniformity on the sphere.
#'
#' @slot method Description of the test.
#' @slot x Matrix of data
#' @slot Tn The value of the standardized U-statistic.
#' @slot CV_Tn The critical value for Tn computed through replications.
#' @slot H0_Tn A logical value indicating whether or not the null hypothesis is 
#'             rejected according to Tn.
#' @slot Sn The value of the V-statistic.
#' @slot CV_Sn The critical value for Sn computed following the asymptotic 
#'             distribution.
#' @slot H0_Sn A logical value indicating whether or not the null hypothesis is 
#'             rejected according to Sn.
#' @slot rho The concentration parameter of the Poisson kernel.
#' @slot B Number of replications.
#' @slot var_Tn exact variance of the kernel-based U-statistic.
#'
#' @seealso [pk.test()] 
#' 
#' @examples
#' # create a pk.test object
#' d=3
#' size=100
#' x_sp <- sample_hypersphere(d, n_points=size)
#' pk.test(x_sp,rho=0.8)
#'
#' @srrstats {G1.4} roxigen2 is used
#' 
#' @noRd
setClass("pk.test",
         slots = list(
            method = "character",
            Tn = "numeric",
            CV_Tn = "numeric",
            H0_Tn = "logical",
            Sn = "numeric",
            CV_Sn = "numeric",
            H0_Sn = "logical",
            x = "matrix",
            B = "numeric",
            rho = "numeric",
            var_Tn = "numeric"
         )
)
#' @rdname pkbc-class
#'
#' @title A S4 class for the clustering algorithm on the sphere based on
#' Poisson kernel-based distributions.
#'
#' @description A class to represent the results of Poisson kernel-based 
#'              clustering procedure for spherical observations.
#'
#' @slot res_k List of objects with the results of the clustering algorithm for 
#'             each value of possible number of clusters considered.
#' @slot input List of input data
#'
#' @seealso [pkbc()] for more details.
#' 
#' @examples 
#' data("wireless")
#' res <- pkbc(as.matrix(wireless[,-8]),4)
#' 
#' @srrstats {G1.4} roxigen2 is used
#' @srrstats {UL4.0, UL4.1, UL4.2} class object created for the clustering 
#'            results. It allows to create an object without running the 
#'            algorithm. All the input control parameters can be extracted from
#'            the result object.
#' 
#' @noRd
setClass("pkbc",
         slots = list(
            res_k = "list",
            input = "list"
         )
)
