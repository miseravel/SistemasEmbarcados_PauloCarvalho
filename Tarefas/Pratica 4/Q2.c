#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {

FILE *fp;

char nome[30];
char copy[30];
int idade;


printf("Qual seu nome? \n");
scanf("%s", nome);

printf("Qual sua idade? \n");
scanf("%d", &idade);

strcpy(copy, nome);

fp = fopen(strcat(copy, ".txt"),"w");

if(!fp)
{
/* Arquivo ASCII, para escrita */
printf( "Erro na abertura do arquivo \n");
exit(0);
 }

 fprintf(fp, "Nome: %s \n", nome);
 fprintf(fp, "Idade: %d \n", idade);

fclose(fp);
return 0;
}
