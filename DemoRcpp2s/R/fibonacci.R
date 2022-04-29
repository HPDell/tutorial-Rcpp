fibonacci_item <- function(n) {
   if (!(is.numeric(n) || is.integer(n))) {
      stop("Parameter n must be numeric or integer.")
   } else if (n < 0) {
      stop("Parameter n must be a positive number.")
   }

   .fibonacci_item(n)
}

fibonacci_seq <- function(n) {
   if (!(is.numeric(n) || is.integer(n))) {
      stop("Parameter n must be numeric or integer.")
   } else if (n < 0) {
      stop("Parameter n must be a positive number.")
   }

   .fibonacci_seq(n)
}

fibonacci_sum <- function(n, weights) {
   if (missing(weights)) {
      weights <- numeric(n) + 1.0
   } else {
      if (length(weights) != n) {
         stop("Lengths of fabonacci sequence and weights are not equal.")
      }
   }
   .fibonacci_sum(n, weights)
}
