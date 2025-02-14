#include <check.h>
#include "../src/reverse_num.h" // Include the factorial function`
#include <stdio.h>

START_TEST(test_reverse)
{
    ck_assert_int_eq(reverse_num(123), 321);
    ck_assert_int_eq(reverse_num(456), 654);
    ck_assert_int_eq(reverse_num(221), 122);
}
END_TEST

Suite *reverse_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("reverse");

    // core test case
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_reverse);
    suite_add_tcase(s, tc_core);

    return s;
}

int main()
{
    printf("Calling reverse factorial...");
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = reverse_suite();
    sr = srunner_create(s);
    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? 0 : 1;
}