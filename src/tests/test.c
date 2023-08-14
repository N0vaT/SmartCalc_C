#include "test.h"

START_TEST(s21_test_calculate) {
  char out[255] = "";
  
  polish_notac("5+6.0", out, 0, 0);
  ck_assert_str_eq(out, "11.000000");
  polish_notac("5++6.0", out, 0, 0);
  ck_assert_str_eq(out, "11.000000");
  polish_notac("5+-6.0", out, 0, 0);
  ck_assert_str_eq(out, "-1.000000");
  polish_notac("5-6.0", out, 0, 0);
  ck_assert_str_eq(out, "-1.000000");
  polish_notac("5*6.0", out, 0, 0);
  ck_assert_str_eq(out, "30.000000");
  polish_notac("30/6.0", out, 0, 0);
  ck_assert_str_eq(out, "5.000000");
  polish_notac("5*6.0", out, 0, 0);
  ck_assert_str_eq(out, "30.000000");
  polish_notac("12%6.0", out, 0, 0);
  ck_assert_str_eq(out, "0.000000");
  polish_notac("12%5.0", out, 0, 0);
  ck_assert_str_eq(out, "2.000000");
  polish_notac("2^3.0", out, 0, 0);
  ck_assert_str_eq(out, "8.000000");
  polish_notac("cos(1)", out, 0, 0);
  ck_assert_str_eq(out, "0.540302");
  polish_notac("sin(1)", out, 0, 0);
  ck_assert_str_eq(out, "0.841471");
  polish_notac("tan(1)", out, 0, 0);
  ck_assert_str_eq(out, "1.557408");
  polish_notac("acos(0.2)", out, 0, 0);
  ck_assert_str_eq(out, "1.369438");
  polish_notac("asin(0.2)", out, 0, 0);
  ck_assert_str_eq(out, "0.201358");
  polish_notac("atan(0.2)", out, 0, 0);
  ck_assert_str_eq(out, "0.197396");
  polish_notac("sqrt(16)", out, 0, 0);
  ck_assert_str_eq(out, "4.000000");
  polish_notac("ln(4)", out, 0, 0);
  ck_assert_str_eq(out, "1.386294");
  polish_notac("log(4)", out, 0, 0);
  ck_assert_str_eq(out, "0.602060");
  polish_notac("15/(7-(1+1))*3-(2+(1+1))*15/(7-(200+1))*3-(2+(1+1))*(15/(7-(1+1))*3-(2+(1+1))+15/(7-(1+1))*3-(2+(1+1)))", out, 0, 0);
  ck_assert_str_eq(out, "-30.072165");
}
END_TEST

START_TEST(s21_test_error) {
  char out[255] = "";
  
  ck_assert_int_eq(polish_notac("", out, 0, 0), 1);
  ck_assert_int_eq(polish_notac("sin)x(", out, 0, 0), 2);
  ck_assert_int_eq(polish_notac(")3+1(", out, 0, 0), 2);
  ck_assert_int_eq(polish_notac("6.0.3", out, 0, 0), 4);
  ck_assert_int_eq(polish_notac("son(1)", out, 0, 0), 4);
  ck_assert_int_eq(polish_notac("cis(1)", out, 0, 0), 4);
  ck_assert_int_eq(polish_notac("ton(1)", out, 0, 0), 4);
  ck_assert_int_eq(polish_notac("ason(1)", out, 0, 0), 4);
  ck_assert_int_eq(polish_notac("acis(1)", out, 0, 0), 4);
  ck_assert_int_eq(polish_notac("atin(1)", out, 0, 0), 4);
  ck_assert_int_eq(polish_notac("lyg(1)", out, 0, 0), 4);
  ck_assert_int_eq(polish_notac("lt(1)", out, 0, 0), 4);
  ck_assert_int_eq(polish_notac("1f2", out, 0, 0), 4);
}
END_TEST

Suite* s21_calc_suite(void) {
  Suite* suite;

  TCase* s21_calc_tcase;

  suite = suite_create("s21_calc_test");

  s21_calc_tcase = tcase_create("s21_calc_tcase");

  tcase_add_test(s21_calc_tcase, s21_test_calculate);
  tcase_add_test(s21_calc_tcase, s21_test_error);

  suite_add_tcase(suite, s21_calc_tcase);

  return suite;
}

int main(void) {
  Suite *suite = s21_calc_suite();
  SRunner *suite_runner = srunner_create(suite);

  srunner_run_all(suite_runner, CK_NORMAL);
  int failed_count = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);

  if (failed_count != 0) {
    return 1;
  }

  return 0;
}
