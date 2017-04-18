#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

int main (int argc, char *argv[]){
	int i=1;
	char a[10];

	while(i<argc){

	strcpy(a, argv[i]);
	system(a);
	i++;
}
return 0;
}
