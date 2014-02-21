/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_justTryingOutTryCatch_should_throw_exception(void);
extern void test_addPositiveNumbers_should_add_two_positive_correctly(void);
extern void test_addPositiveNumbers_should_throw_an_exception_indicating_both_value_is_negative(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_TryCatch.c";
  UnityBegin();
  RUN_TEST(test_justTryingOutTryCatch_should_throw_exception, 7);
  RUN_TEST(test_addPositiveNumbers_should_add_two_positive_correctly, 12);
  RUN_TEST(test_addPositiveNumbers_should_throw_an_exception_indicating_both_value_is_negative, 18);

  return (UnityEnd());
}