#include <stdio.h>
#include "ft_str_is_numeric.c"

int main()
{ 

	printf("Esperado: 1\n");
	char str2[] = "2345046545665"; 
	printf("Resultado %d\n", ft_str_is_numeric(str2));
	printf("***\n");
	
	printf("Esperado: 0\n");
	char str1[] = "146644~";
	printf("Resultado: %d\n", ft_str_is_numeric(str1));
	printf("***\n");
	
	printf("Esperado: 1\n");
	char str7[] = "1"; //1 
	printf("Resultado: %d\n", ft_str_is_numeric(str7));
	printf("***\n");
	
	printf("Esperado: 0\n");
	char str6[] = "xsdcfggf345q3GEDG"; 
	printf("Resultado: %d\n", ft_str_is_numeric(str6));
	
	printf("***\n");
	printf("Esperado: 1\n");
	char str8[] = "";
	printf("Resultado: %d\n", ft_str_is_numeric(str8));
}