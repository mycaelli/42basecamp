/*
Reproduzir de forma idêntica o funcionamento da função strcpy (man strcpy), including the terminating null byte ('\0')
The strings may not overlap, and the destination string dest must be large enough to receive the copy.

 strcpy()  function  copies  the  string  pointed  to by src

 -> copia o conteudo de um string para outra
*/

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src)
{
	//printf("INFOS SRC\n");
	//printf("string completa: %s\n", src);
	//printf("conteudo do endereço em src: %c\n", *src);

	printf("INFOS DEST\n");
	printf("string completa: %s\n", dest);
	printf("conteudo do endereço em src: %c\n", *dest);

	int size; //guarda o tamanho da string apontada por src
	int count;
	char *p_src; //guarda o endereço de *src
	size = 0;
	count = 0;
	p_src = src;
	while(*src != '\0')
	{
		size++;
		src++;
	}

	//printf("--------------------------\n");
	//printf("string completa: %s\n", src);
	//printf("conteudo do endereço em src: %c\n", *src);
	//printf("conteudo do endereço em p_src: %s\n", p_src);

	while(count < size)
	{
		dest[count] = p_src[count];
		count++;
	}

	printf("--------------------------\n");
	printf("string completa: %s\n", dest);
	//printf("conteudo do endereço em src: %c\n", *dest);
	//printf("conteudo do endereço em p_src: %s\n", p_);

	return dest; 
}