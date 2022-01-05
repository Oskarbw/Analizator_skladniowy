#include "alex.h"
#include "parser.h"

#include <stdlib.h>

int main(int argv, char** argc){

	if (argv != 2)
	{
		fprintf(stderr, "Nie podano nazwy pliku");
		return 1;
	}
	analizatorSkladni(argc[1]);
	return 0;
}