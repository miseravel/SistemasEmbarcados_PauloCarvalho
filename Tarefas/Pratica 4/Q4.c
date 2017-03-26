#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tam_arq_texto(char *nome_arquivo)
{

FILE *fp;

char arquivo[100];
char count;
int num = 0;
int tamanho;

printf("Informe o nome do arquivo .txt que deseja saber o tamanho: \n");
scanf("%s", nome_arquivo);

strcpy(arquivo, nome_arquivo);

fp = fopen(strcat(arquivo, ".txt"),"r");

if(!fp)
{
/* Arquivo ASCII, para escrita */
printf( "Erro na abertura do arquivo \n");
exit(0);
 }

do {

  num = num + 1;

} while((count = getc(fp) ) != EOF);

tamanho = num - 2;

printf(" Tamanho do arquivo: %d bytes \n", tamanho);

fclose(fp);
return 0;
}
