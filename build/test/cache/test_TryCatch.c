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

 UnityAssertEqualNumber((_U_SINT)((11)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)15, UNITY_DISPLAY_STYLE_INT);

}



void test_addPositiveNumbers_should_throw_an_exception_indicating_both_value_is_negative()

{

 int e;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  int result = addPositiveNumbers(-4,-7);

 }else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { e = CExceptionFrames[MY_ID].Exception; e=e; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  UnityAssertEqualNumber((_U_SINT)((ERR_BOTH_NUMS_NEG)), (_U_SINT)((e)), (((void *)0)), (_U_UINT)24, UNITY_DISPLAY_STYLE_INT);

  return;



 }

 UnityFail( ("No exception thrown."), (_U_UINT)28);;

}
