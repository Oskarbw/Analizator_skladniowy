#include "fun_stack.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void top_of_fun_stack_test(void){
	int test = 5;
	char *test_f = "function_top";
	put_on_fun_stack(test, test_f);

	printf("Test top_of_fun_stack: ");
	if (top_of_fun_stack() == test)
		printf("Success\n");
	else
		printf("Failure\n");
}

void put_on_fun_stack_test(void){
	int test = 6;
	char *test_f = "function_put";
	put_on_fun_stack(test, test_f);

	printf("Test put_on_fun_stack: ");

	if((top_of_fun_stack() == test) && (strcmp(get_from_fun_stack(), test_f) == 0))
		printf("Succes\n");
	else
		printf("Failure\n");
}

void get_from_fun_stack_test(void){
	int test1=7;
	int test2=8;
	char *test_f1 = "function_get";
	char *test_f2 = "function_get2";

	put_on_fun_stack(test1, test_f1);

	printf("Test get_from_fun_stack: ");
	if ((top_of_fun_stack() == test1) && strcmp(get_from_fun_stack(), test_f1) == 0){
		put_on_fun_stack(test2, test_f2);
		if((top_of_fun_stack() == test1) || strcmp(get_from_fun_stack(), test_f2) != 0)
			printf("Failure\n");
		else
			printf("Success\n");
	}
	else
		printf("Failure\n");
}

int main(){
	put_on_fun_stack_test();
	get_from_fun_stack_test();
	top_of_fun_stack_test();
	return 0;
}


