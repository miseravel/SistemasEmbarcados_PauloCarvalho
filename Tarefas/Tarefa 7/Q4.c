#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

int main(){

	int fd[2];
	int pid;
	char mensagem[50];
	char mensagem_lida[50];
	pipe(fd);

	pid=fork();

	if(pid==0){
	printf("Insira o nome do usuario: ");
	gets(mensagem);
	write(fd[1],mensagem,sizeof(mensagem));
}
	else{
	read(fd[0],mensagem_lida,sizeof(mensagem_lida));
	printf("\nA mensagem que o Pai tem a dizer é: %s\n", mensagem_lida);
}
return 0;
}
