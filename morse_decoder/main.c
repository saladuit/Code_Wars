#include <criterion/criterion.h>

char *decode_morse(const char *morse_code);
void tester(const char *morse_test, char *expected);

Test(Example_Tests, should_pass_all_the_tests_provided)
{
	tester(".... . -.--   .--- ..- -.. .", "HEY JUDE");
}