#include <stdio.h>
#include <stdlib.h>
#include "Q4.h"

int Q4(char *nomeArquivo) {

    FILE *arquivo;
    int tamanho;

      arquivo = fopen(nomeArquivo, "r");


    if (arquivo != NULL) {

        fseek(arquivo, 0, SEEK_END);


        tamanho = ftell(arquivo);
        tamanho--;
          }

    return tamanho;

}
