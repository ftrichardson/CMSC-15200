#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <assert.h>

#include "se1.h"

/*
 * vec_length - compute the length of a vector in 3-space
 *
 * x, y, z: coordinates of the vector
 *
 * Returns: length of the vector.
 */
double vec_length(double x, double y, double z)
{
    // YOUR CODE GOES HERE
    // Replace 0.0 with an appropriate return value
    return 0.0;
}


/*
 * compute_div_fraction - extract fractional part of the value that
 * results from dividing x by y.
 *
 * x: numerator (assume x > 0)
 * y: denominator (assume y > 0)
 *
 * Returns: value less than or equal to zero 
 */
double compute_div_fraction(int x, int y)
{
    assert(x > 0);
    assert(y > 0);

    // YOUR CODE GOES HERE
    // Replace 0.0 with an appropriate return value
    return 0.0;
}

/*
 * is_congruent_mod_n - determine whether a and b have the same
 * remainder when divided by n.
 * 
 * a, b: numerators (assume a > 0 and b > 0)
 * n: denominator (assume n > 0)
 *
 * Returns: true if a and b are congruent mod n and false otherwise.
 */
bool is_congruent_mod_n(int a, int b, int n) 
{
    assert(a > 0);
    assert(b > 0);
    assert(n > 0);
    
    // YOUR CODE GOES HERE
    // Replace false with an appropriate return value
    return false;
}


/* 
 * is_out_of_range - determinea whether x is outside the range lb...ub
 * (inclusive if enpoints_in_range is true).
 *
 * x: values to be checked
 * lb: lower bound of the range
 * ub: upper bound of the range
 * endpoints_in_range: true if lb and ub should be consider part of the range
 *
 * Returns: true if x is not in the range lb to ub, false otherwise.
 */
bool is_out_of_range(double x, double lb, double ub, bool endpoints_in_range)
{
    // YOUR CODE GOES HERE
    // Replace false with an appropriate return value
    return false;
}

/* 
 * clip - clip values outside the interval [lb, ub] (inclusive) to the
 *   interval edges.
 * 
 * x: value to be clipped
 * lb: lower bound of the interval
 * ub: upper bound of the interval
 *
 * Returns: clipped value
 */
double clip(double x, double lb, double ub)
{
    // YOUR CODE GOES HERE
    // Replace 0.0 with an appropriate return value
    return 0.0;
}


