#include <stdio.h>
#include "ft_str_is_printable.c"

int main()
{
	printf("EX 06 -------- \n");
	printf("Esperado: 1\n");
	char str2[] = "ASXDFVGBHNJHG"; 
	printf("Resultado %d\n", ft_str_is_printable(str2));
	printf("***\n");
	
	printf("Esperado: 0\n");
	char str1[] = "asdfgtySDCFGHNJ\n567565er@";
	printf("Resultado: %d\n", ft_str_is_printable(str1));
	printf("***\n");
	
	printf("Esperado: 1\n");
	char str7[] = ""; 
	printf("Resultado: %d\n", ft_str_is_printable(str7));
	printf("***\n");
	
	printf("Esperado: 0\n");
	char str6[] = "@S\tDFGTHJUG"; 
	printf("Resultado: %d\n", ft_str_is_printable(str6));
	printf("EX 06 -------- \n");
	printf("\n");
}