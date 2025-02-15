#include <check.h>
#include "../src/prime.h" // Include the factorial function`
#include <stdio.h>
#include <stdbool.h>

START_TEST(test_prime)
{
    ck_assert_int_eq(prime(1),false);
    ck_assert_int_eq(prime(7), true);
    ck_assert_int_eq(prime(9), false);

}
END_TEST

Suite *factorial_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("factorial");

    // core test case
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_prime);
    suite_add_tcase(s, tc_core);

    return s;
}

int main()
{
    printf("Calling test prime...");
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