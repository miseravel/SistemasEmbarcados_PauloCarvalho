#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

FILE *fp;

fp = fopen("ola_mundo.txt","w");
if(!fp)
{
/* Arquivo ASCII, para escrita */
printf( "Erro na abertura do arquivo");
exit(0);
 }

fprintf(fp, "Olá Mundo!!! \n");

fclose(fp);
return 0;
}
