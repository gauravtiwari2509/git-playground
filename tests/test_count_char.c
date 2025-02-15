#include <check.h>
#include "../src/count_char.h" // Include the factorial function`
#include <stdio.h>

START_TEST(test_count_char)
{
    char* a = "test";
    char* b = "test another string";
    char* c = "test yet another string";

    ck_assert_int_eq(count_char(a), 4);
    ck_assert_int_eq(count_char(b), 19);
    ck_assert_int_eq(count_char(c), 23);
}
END_TEST

Suite *average_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("average");

    // core test case
    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_count_char);
    suite_add_tcase(s, tc_core);

    return s;
}

int main()
{
    printf("Calling test count_char...");
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = average_suite();
    sr = srunner_create(s);
    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? 0 : 1;
}