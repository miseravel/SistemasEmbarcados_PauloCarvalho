#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {

FILE *fp;

char copy[30];

strcpy(copy, argv[1]);

fp = fopen(strcat(copy, ".txt"),"w");

if(!fp)
{
/* Arquivo ASCII, para escrita */
printf( "Erro na abertura do arquivo \n");
exit(0);
 }

 fprintf(fp, "Nome: %s \n", argv[1]);
 fprintf(fp, "Idade: %s \n", argv[2]);

fclose(fp);
return 0;
}
