#include <stdio.h>
#include "ft_str_is_uppercase.c"

int main()
{
	printf("EX 04 -------- \n");
	printf("Esperado: 1\n");
	char str2[] = "ASXDFVGBHNJHG"; 
	printf("Resultado %d\n", ft_str_is_uppercase(str2));
	printf("***\n");
	
	printf("Esperado: 0\n");
	char str1[] = "asdfgtySDCFGHNJ~567565er@";
	printf("Resultado: %d\n", ft_str_is_uppercase(str1));
	printf("***\n");
	
	printf("Esperado: 1\n");
	char str7[] = ""; 
	printf("Resultado: %d\n", ft_str_is_uppercase(str7));
	printf("***\n");
	
	printf("Esperado: 0\n");
	char str6[] = "@SDFGTHJUG"; 
	printf("Resultado: %d\n", ft_str_is_uppercase(str6));
	printf("EX 04 -------- \n");
	printf("\n");
}