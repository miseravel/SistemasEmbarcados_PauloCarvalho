#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Q4.h"

int main (int argc, char **argv){

	char count[300];
	le_arq_texto(argv[1],count);
  
	printf("Conteudo do arquivo: \n%s\n",count);

return 0;
}
