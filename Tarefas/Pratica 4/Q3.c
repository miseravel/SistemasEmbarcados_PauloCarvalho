#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[]) {

FILE *fp;

fp = fopen(argv[1],"w");

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
