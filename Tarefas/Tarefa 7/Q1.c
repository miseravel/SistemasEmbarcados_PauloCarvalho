#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

int main()
{
	int pid;
	int fd[2];
	int i=1;
	int j=1;
	char mensagem[30];
	// Cria o pipe
	pipe(fd);
	// Cria o processo
	pid = fork();

	if(pid==0){
	printf("Filho vai ler o pipe\n");
	while(j<11){

	read(fd[0],mensagem, sizeof(mensagem));
	printf("Filho leu: %d\n", mensagem[j]);
	j++;
	}
}
	else{
	printf("Pai vai escrever no pipe\n");
	while(i<11){
		mensagem[i]=i;
		write(fd[1],mensagem,sizeof(mensagem));
		sleep(1);
		i++;
	}
	printf("Pai terminou de escrever no pipe\n");
}
return 0;
}
