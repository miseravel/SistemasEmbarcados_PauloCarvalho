#include <stdio.h>
#include "Q8.h"

int main(int argc, char *argv[]) {

  int i = 0;
  int valor = 0;

  	while(i < argc)
  	{
  		valor = Q8(argv[i]);
  		printf("Argumento: %s / Número de caracteres: %d\n",argv[i],valor);
  		i++;

  	}

  return 0;
}
