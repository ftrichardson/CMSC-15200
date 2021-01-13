#include <stdbool.h>
#include <criterion/criterion.h>
#include "se1.h"

#define EPSILON (0.000000001)

Test(vec_length, test0) {
  double actual = vec_length(3.0, 4.0, 5.0);
  double expected = 7.0710678119;
  cr_assert_float_eq(actual, expected, EPSILON);  
}

Test(vec_length, test1) {
  double actual = vec_length(0.0, 0.0, 0.0);
  double expected = 0.0;
  cr_assert_float_eq(actual, expected, EPSILON);  
}

Test(vec_length, test2) {
  double actual = vec_length(2.0, 2.0, 1.0);
  double expected = 3.0;
  cr_assert_float_eq(actual, expected, EPSILON);  
}

Test(vec_length, test3) {
  double actual = vec_length(3.0, 4.0, -1.0);
  double expected = 5.0990195136;
  cr_assert_float_eq(actual, expected, EPSILON);  
}

Test(vec_length, test4) {
  double actual = vec_length(-3.0, -4.0, -1.0);
  double expected = 5.0990195136;
  cr_assert_float_eq(actual, expected, EPSILON);  
}


Test(compute_div_fraction, test0) {
  double actual = compute_div_fraction(4, 5);
  double expected = 0.8;
  cr_assert_float_eq(actual, expected, EPSILON);
}

Test(compute_div_fraction, test1) {
  double actual = compute_div_fraction(4, 4);
  double expected = 0.0;
  cr_assert_float_eq(actual, expected, EPSILON);
}

Test(compute_div_fraction, test2) {
  double actual = compute_div_fraction(1, 3);
  double expected = 1/3.0;
  cr_assert_float_eq(actual, expected, EPSILON);
}

Test(compute_div_fraction, test3) {
  double actual = compute_div_fraction(4, 3);
  double expected = 1/3.0;
  cr_assert_float_eq(actual, expected, EPSILON);
}

Test(is_congruent_mod_n, test0) {
  cr_assert(is_congruent_mod_n(2, 7, 5));
}

Test(is_congruent_mod_n, test1) {
  cr_assert(is_congruent_mod_n(1, 10, 1));
}

Test(is_congruent_mod_n, test2) {
  cr_assert(!is_congruent_mod_n(1, 10, 4));
}


Test(is_out_of_range, test0) {
  bool actual = is_out_of_range(0.0, 1.0, 4.0, false);
  cr_assert(actual);
}

Test(is_out_of_range, test1) {
  bool actual = is_out_of_range(0.0, 1.0, 4.0, true);
  cr_assert(actual);
}

Test(is_out_of_range, test2) {
  bool actual = is_out_of_range(2.33, 1.0, 4.0, false);
  cr_assert(!actual);
}

Test(is_out_of_range, test3) {
  bool actual = is_out_of_range(2.33, 1.0, 4.0, true);
  cr_assert(!actual);
}

Test(is_out_of_range, test4) {
  bool actual = is_out_of_range(1.0, 1.0, 4.0, false);
  cr_assert(actual);
}

Test(is_out_of_range, test5) {
  bool actual = is_out_of_range(1.0, 1.0, 4.0, true);
  cr_assert(!actual);
}

Test(is_out_of_range, test6) {
  bool actual = is_out_of_range(4.0, 1.0, 4.0, false);
  cr_assert(actual);
}

Test(is_out_of_range, test7) {
  bool actual = is_out_of_range(4.0, 1.0, 4.0, true);
  cr_assert(!actual);
}

Test(is_out_of_range, test8) {
  bool actual = is_out_of_range(0.0, -10, 10.0, false);
  cr_assert(!actual);
}

Test(is_out_of_range, test9) {
  bool actual = is_out_of_range(0.0, -10, 10.0, true);
  cr_assert(!actual);
}

Test(clip, test0) {
  double actual = clip(0.0, 0.0, 4.0);
  cr_assert(actual == 0.0);
}

Test(clip, test1) {
  double actual = clip(-1.0, 0.0, 4.0);
  cr_assert(actual == 0.0);
}

Test(clip, test2) {
  double actual = clip(4.0, 0.0, 4.0);
  cr_assert(actual == 4.0);
}

Test(clip, test3) {
  double actual = clip(5.0, 0.0, 4.0);
  cr_assert(actual == 4.0);
}

Test(clip, test4) {
  double actual = clip(2.5, 0.0, 4.0);
  cr_assert(actual == 2.5);
}
