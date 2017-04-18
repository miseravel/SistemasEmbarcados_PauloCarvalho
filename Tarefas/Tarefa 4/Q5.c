void le_arq_texto(char *nome_arquivo, char *conteudo){

	FILE *fp;
	fp = fopen (nome_arquivo, "r");
	if(!fp)
{
	printf("IMPOSSIVEL ABRIR O ARQUIVO");
	exit (0);
}
	int count = 0;
	char c;

	while((c=getc(fp)) != EOF) {
		conteudo[count] = c ; count++;
}

	fclose(fp);
}
