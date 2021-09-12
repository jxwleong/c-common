#ifdef TEST

#include "unity.h"

#include "common.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_common_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement common");
}

void test_decimalToChar_given_1_in_int_expect_return_1_char(void)
{
    // Used TEST_ASSERT_EQUAL_INT8 instead of TEST_ASSERT_EQUAL_CHAR 
    // because "1" is showing "\xE1" which cause the test fail...
    TEST_ASSERT_EQUAL_INT8(49, decimalToChar(1));
}

void test_getDecimalInBinaryStr_given_123_in_int_expect_return_1111011_STRING(void)
{
    TEST_ASSERT_EQUAL_STRING("1111011", getDecimalInBinaryStr(123));
}

#endif // TEST
