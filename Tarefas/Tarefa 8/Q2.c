#include <stdlib.h>
#include <stdio.h>	// Para a funcao printf()
#include <fcntl.h>	// Para a funcao open()
#include <unistd.h>	// Para a funcao close()
#include <stdlib.h>	// Para a função exit()
#include <string.h>
#include <pthread.h>
#include <time.h>

long int soma_t[3];
int i_t=0;

void* funcao1 (void* numero){
	long int *p = (long int*) numero;
	int i=0;
	long int somatotal=0;
		while(i < 12500){
			somatotal=somatotal + p[i];
			i++;
}
	soma_t[i_t]=somatotal;
	printf("O valor da soma do %d quarto é: %ld\n", i_t+1, soma_t[i_t]);
		i_t++;
}

int main(){

	long int v[50000];
	long int soma_thread = 0;
	srand(time(NULL));
	long int soma=0;
	int contador=0;
	pthread_t thread1;
	pthread_t thread2;
	pthread_t thread3;
	pthread_t thread4;

	while (contador <50000){
		v[contador]=rand() ;
		//printf("%ld", v[contador]);
		soma = soma + v[contador];
		contador++;
	}
	pthread_create (&thread1,NULL, &funcao1, v);
		pthread_join(thread1, NULL);
 	pthread_create (&thread2,NULL, &funcao1, (v+12500));
		pthread_join(thread2, NULL);
 	pthread_create (&thread3,NULL, &funcao1, (v+25000));
		pthread_join(thread3, NULL);
 	pthread_create (&thread4,NULL, &funcao1, (v+37500));
		pthread_join(thread4, NULL);
	soma_thread= soma_t[0] + soma_t[1] + soma_t[2] + soma_t[3];
	printf("Soma total com thread: %ld\n", soma_thread);
	printf("Soma sem thread:       %ld\n", soma);

return 0;
}
