#include <stdio.h>
#include "ft_str_is_alpha.c"

int main()
{
	
	printf("Esperado: 1\n");
	char str[] = "sdfghjklsdfgjvf"; 
	printf("Resultado %d\n", ft_str_is_alpha(str));
	printf("***\n");
	printf("Esperado: 0\n");
	char str1[] = "sdfghjkl çsdfgjvf";
	printf("Resultado: %d\n", ft_str_is_alpha(str1));
	printf("***\n");
	printf("Esperado: 1\n");
	char str4[] = "sdfgASDFGHJRFvf"; 
	printf("Resultado: %d\n", ft_str_is_alpha(str4));
	printf("***\n");
	printf("Esperado: 0\n");
	char str6[] = "@#$345q3"; 
	printf("Resultado: %d\n", ft_str_is_alpha(str6));
	printf("***\n");
	printf("Esperado: 1\n");
	char str7[] = "";
	printf("Resultado: %d\n", ft_str_is_alpha(str7));
	
}