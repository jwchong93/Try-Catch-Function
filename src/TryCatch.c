#include <stdio.h>
#include "TryCatch.h"
#include "CException.h"

void nastyFunction ()
{
	//Because I am nasty, I am going to throw something
	Throw(1234);
}

void trying2BeNice ()
{
	int exception;
	Try{
		nastyFunction ();
	}Catch(exception){
		printf("I know you are nasty, but it is fine. \n");
		Throw(4567);
	}
}
void justTryingTryCatch ()
{
	int e,e2;
	
	printf("NO_ERROR: %d\n",NO_ERROR);
	printf("ERR_FIRST_NUM_NEG: %d\n",ERR_FIRST_NUM_NEG);
	printf("ERR_SECOND_NUM_NEG: %d\n",ERR_SECOND_NUM_NEG);
	printf("ERR_BOTH_NUMS_NEG: %d\n",ERR_BOTH_NUMS_NEG);
	
	Try{
		Try{
			//Any number of statements to try 
			printf("Trying...\n");
			//Throw(2);
			trying2BeNice();
		}Catch(e){
			printf("an exception has been thrown : %d \n",e);
			//I think I like to throw....
			Throw(45);
		}
	}Catch(e2){
		printf("you have rethrown: %d\n",e2);
		}
	printf("Hello World!");
}


int addPositiveNumbers(int value1,int value2)
{
	if(value1>0&&value2>0)
	return value1+value2;
	if(value1<=0&&value2<=0)
	Throw(ERR_BOTH_NUMS_NEG);
	return;
	if(value1<=0)
	Throw(ERR_FIRST_NUM_NEG);
	if(value2<=0)
	Throw(ERR_SECOND_NUM_NEG);
	Throw(NO_ERROR);
}