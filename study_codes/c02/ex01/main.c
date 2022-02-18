//Reproduzir de forma idêntica o funcionamento da função strncpy (man strncpy).

#include "ft_strncpy.c"
#include <stdio.h>
int main()
{
   
	printf("------------------------------------\n");
    char src1[] = "abcdefghijklmnopqrstuvwxyz";
    unsigned int size1 = 26;
    char dest1[27];
	printf("copia 1 : %s\n", ft_strncpy(dest1, src1, size1));

    printf("------------------------------------\n");
    char src2[] = "abcdefghijklmnopqrstuvwxyz";
    unsigned int size2 = 13;
    char dest2[27];
	printf("copia 2 : %s\n", ft_strncpy(dest2, src2, size2));
    
	printf("------------------------------------\n");
    char src3[] = "abcdefghijklmnopqrstuvwxyz";
    unsigned int size3 = 1;
    char dest3[27];
	printf("copia 2 : %s\n", ft_strncpy(dest3, src3, size3));

	printf("------------------------------------\n");
    char src4[] = "abcdefghijklmnopqrstuvwxyz";
    unsigned int size4 = 0;
    char dest4[27];
	printf("copia 2 : %s\n", ft_strncpy(dest4, src4, size4));

	printf("------------------------------------\n");
    char src5[] = "abcdefghijklmnopqrstuvwxyz";
    unsigned int size5 = 35;
    char dest5[27];
	printf("copia 2 : %s\n", ft_strncpy(dest5, src5, size5));
	//printf("------------------------------------");
}