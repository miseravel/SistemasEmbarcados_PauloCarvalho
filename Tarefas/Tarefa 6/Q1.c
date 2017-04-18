#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main (int argc, char *argv[]){
	printf("O processo desde programa é: %d.\n", (int) getpid());
	system("\n");
	system("ps");
	pid_t pid_child;
	pid_child= fork();

	if(pid_child != 0){
		printf("Esse é o processo pai: %d\n", (int) getpid());
		printf("O primeiro filho possui o pid: %d\n", pid_child);

	pid_child=fork();
	}

	if(pid_child != 0){
		printf("Esse é o processo pai: %d\n", (int) getpid());
		printf("O segundo filho possui o pid: %d\n", pid_child);

	pid_child=fork();
	}

	if(pid_child != 0){
		printf("Esse é o processo pai: %d\n", (int) getpid());
		printf("O terceiro filho possui o pid: %d\n", pid_child);

	}
	}
