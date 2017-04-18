#include <stdlib.h>
#include <stdio.h>	// Para a funcao printf()
#include <fcntl.h>	// Para a funcao open()
#include <unistd.h>	// Para a funcao close()
#include <stdlib.h>	// Para a função exit()
#include <string.h>
#include <pthread.h>

struct contador_numeros{
	int count;
	//char aleatorio;
};

	void* funcao (void* numero) {
	struct contador_numeros* p = (struct contador_numeros*) numero;
	int i=1;

		while(i<=p->count){

			printf("%d\n", i);
			sleep(0.1);

			i++;
}
	return NULL;
}

int main (){

	pthread_t thread1_id;
	struct contador_numeros argumentos;
	int contar_quanto;

	printf("Deseja contar ate quanto? ");
	scanf("%d", &contar_quanto);
	argumentos.count = contar_quanto;
	pthread_create (&thread1_id,NULL, &funcao, &argumentos);

	pthread_join(thread1_id, NULL);

	return 0;
}
