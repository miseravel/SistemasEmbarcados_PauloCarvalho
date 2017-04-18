#include <stdio.h>	// Para a funcao printf()
#include <fcntl.h>	// Para a funcao open()
#include <unistd.h>	// Para a funcao close()
#include <stdlib.h>	// Para a função exit()

int main(){
	int fp;
	fp = open ("ola_mundo.txt", O_RDWR | O_CREAT, S_IRWXU);
	if(fp==-1)
	{
		printf("Erro na abertura do arquivo.\n");
		exit(-1);
	}

	write(fp,"Ola Mundo Cruel!!\n",17);

	system("cat ola_mundo.txt");
	close(fp);
return 0;
}
