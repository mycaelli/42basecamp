#include "ft_strcapitalize.c"
#include <stdio.h>

int main()
{ 

	printf("EX 09 -------- \n");
	printf("Entrada: oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um\n");
	char str2[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("Saída: %s\n", ft_strcapitalize(str2));
	printf("***\n");
	
	printf("Entrada: Oi, tudo bem? hum...bom Saber\n");
	char str[] = "Oi, tudo bem? hum...bom Saber";
	printf("Saída: %s\n", ft_strcapitalize(str));
	printf("***\n");

	printf("EX 09 -------- \n");
	printf("\n");
}