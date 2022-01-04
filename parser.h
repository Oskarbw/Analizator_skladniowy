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
  
  int* linesOfDefinition;
  char* fileOfDefinition;
  
  struct funIncluded* funsIncluded;
  int numOfFunsIncluded;
  
  
  
} funInfo;




#endif
