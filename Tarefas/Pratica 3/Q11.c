#include <stdio.h>
#include "Q8.h"

int main(int argc, char *argv[]) {

  int i = 0;
  int valor = 0;
  int total = 0;

  	while(i < argc)
  	{
  		valor = Q8(argv[i]);
  		total = (total + valor);
  		i++;

  	}

printf("Total de caracteres de entrada: %d\n", total);

  return 0;
}
