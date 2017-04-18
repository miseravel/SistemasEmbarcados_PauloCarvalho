#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

int main (int argc, char *argv[]){
	int i=1;
	//char a[10];
	char * lista_de_argumentos[5];

	pid_t pid_child;

	while(i<argc){
	pid_child=fork();

		if(pid_child==0){

           	char *lista_de_argumentos[10] = {argv[i], NULL};
            	execvp(argv[i], lista_de_argumentos);
}
i++;
}
return 0;
}
