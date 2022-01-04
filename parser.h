#ifndef PARSER_H
#define PARSER_H
#include "alex.h"       
#include "fun_stack.h"  

#include <string.h>

struct funCall{
  int line;
  char* nameOfFile;
}
struct funIncluded{
char* nameOfFun;
  int num;
}

typedef struct {
  char* funame;
  
  struct funCall* funCalls;
  int numOfFunCalls;
  
  int lineOfPrototype;
  char* fileOfPrototype;
  
  int lineOfDefinition;
  char* fileOfDefinition;
  
  struct funIncluded* funsIncluded;
  int numOfFunsIncluded;
  
  
  
} funInfo;


void store_add_def (char* funame , int line, char* inpname);
void store_add_proto (char* funame , int line, char* inpname);
void store_add_call (char* funame , int line, char* inpname);

void printFunInfo (void);


#endif
