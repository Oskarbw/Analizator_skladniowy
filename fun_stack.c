#include "fun_stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fun_stack* start;

int top_of_fun_stack(void){
	if (start == NULL){
		printf("Brak elementu na stosie\n");
		return 1;
	}
	return start->par_level;
}

void put_on_fun_stack(int par_level, char *funame){
	struct fun_stack* stack = NULL;
	stack = malloc(sizeof(struct fun_stack));
	stack->funame = (char*)malloc((strlen(funame) + 1) * sizeof(*stack->funame));
	strcpy(stack->funame, funame);
	stack->par_level = par_level;
	stack->pre = start;
	start = stack;
}

char* get_from_fun_stack(void){
	char *out;
	out = start->funame;
	struct fun_stack *del;
	del = start;
	start = start->pre;
	free(del);
	return out;
}


