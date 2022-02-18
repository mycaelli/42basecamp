#include <stdio.h>
#include "ft_strupcase.c"

int main()
{ 
	printf("EX 07 -------- \n");
	printf("Entrada: ASXDFVGBHNJHG\n");
	char str2[] = "ASXDFVGBHNJHG"; 
	printf("Saída %s\n", ft_strupcase(str2));
	printf("***\n");
	
	printf("Entrada: asdfgtySDCvfvfd567565ergtGr@\n");
	char str1[] = "asdfgtySDCvfvfd567565ergtGr@";
	printf("Saída: %s\n", ft_strupcase(str1));
	printf("***\n");
	
	printf("Entrada: \n");
	char str7[] = ""; 
	printf("Saída: %s\n", ft_strupcase(str7));
	printf("***\n");
	
	printf("Entrada: dfgthysadduy\n");
	char str6[] = "dfgthysadduy"; 
	printf("Saída: %s\n", ft_strupcase(str6));
	printf("EX 07 -------- \n");
	printf("\n");
}