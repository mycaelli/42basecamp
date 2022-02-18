#include <stdio.h>
#include "ft_str_is_lowercase.c"

int main()
{
	printf("EX 04 -------- \n");
	printf("Esperado: 1\n");
	char str2[] = "sdefrgthydf"; 
	printf("Resultado %d\n", ft_str_is_lowercase(str2));
	printf("***\n");
	
	printf("Esperado: 0\n");
	char str1[] = "efrgthyhty~567565er@";
	printf("Resultado: %d\n", ft_str_is_lowercase(str1));
	printf("***\n");
	
	printf("Esperado: 1\n");
	char str7[] = ""; //1 
	printf("Resultado: %d\n", ft_str_is_lowercase(str7));
	printf("***\n");
	
	printf("Esperado: 0\n");
	char str6[] = "@hgtfbhtfgrf"; 
	printf("Resultado: %d\n", ft_str_is_lowercase(str6));
	printf("EX 04 -------- \n");
}