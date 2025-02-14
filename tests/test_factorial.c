#include <check.h>
#include "../src/factorial.h" // Include the factorial function`
#include <stdio.h>

START_TEST(test_factorial)
{
    ck_assert_int_eq(factorial(5), 120);
    ck_assert_int_eq(factorial(0), 1);
}
END_TEST

Suite *factorial_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("factorial");

    // core test case
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_factorial);
    suite_add_tcase(s, tc_core);

    return s;
}

int main()
{
    printf("Calling test factorial...");
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = factorial_suite();
    sr = srunner_create(s);
    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? 0 : 1;
}