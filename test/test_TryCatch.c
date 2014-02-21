#include "unity.h"
#include "TryCatch.h"
#include "CException.h"
void setUp() {}
void tearDown () {}

void test_justTryingOutTryCatch_should_throw_exception ()
{
	justTryingTryCatch ();
}

void test_addPositiveNumbers_should_add_two_positive_correctly()
{
	int result = addPositiveNumbers(4,7);
	TEST_ASSERT_EQUAL(11,result);
}

void test_addPositiveNumbers_should_throw_an_exception_indicating_both_value_is_negative()
{
	int e;
	Try{
		int result = addPositiveNumbers(-4,-7);
	}Catch(e){
		TEST_ASSERT_EQUAL(ERR_BOTH_NUMS_NEG,e);
		return;
		
	}
	TEST_FAIL_MESSAGE("No exception thrown.");
}