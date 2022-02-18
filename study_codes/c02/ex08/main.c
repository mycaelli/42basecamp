#include <stdio.h>
#include "ft_strlowcase.c"

int main()
{
	printf("EX 08 -------- \n");
	printf("Entrada: fhgdffdghjf\n");
	char str2[] = "fhgdffdghjf"; 
	printf("Saída %s\n", ft_strlowcase(str2));
	printf("***\n");
	
	printf("Entrada: SDFGFD345676#LKJKJnjbhk@#$6754\n");
	char str1[] = "SDFGFD345676#LKJKJnjbhk@#$6754";
	printf("Saída: %s\n", ft_strlowcase(str1));
	printf("***\n");
	
	printf("Entrada: \n");
	char str7[] = ""; 
	printf("Saída: %s\n", ft_strlowcase(str7));
	printf("***\n");
	
	printf("Entrada: OFKLSDVGDG\n");
	char str6[] = "OFKLSDVGDG"; 
	printf("Saída: %s\n", ft_strlowcase(str6));
	printf("EX 08 -------- \n");
	printf("\n");
}
/*
dica 
	verifica se tem letras maiuscula, transforma em
*/