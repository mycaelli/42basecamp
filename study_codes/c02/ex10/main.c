#include "ft_strlcpy.c"
#include <stdio.h>
int main()
{

	printf("EX 10 --------\n");
	char src1[] = "abcdef";
    unsigned int size1 = 6;
    char dest1[6];
	printf("src1: %s\n", src1);
	ft_strlcpy(dest1, src1, size1);
	printf("dest1: %s\n", dest1);
	printf("Retorno: %d\n", ft_strlcpy(dest1, src1, size1));
	printf("***\n");

	char src2[] = "abcdef";
    unsigned int size2 = 10;
    char dest2[10];
	printf("src2: %s\n", src2);
	ft_strlcpy(dest2, src2, size2);
	printf("dest2: %s\n", dest2);
	printf("Retorno: %d\n", ft_strlcpy(dest2, src2, size2));
	printf("***\n");

	char src3[] = "abcdef";
    unsigned int size3 = 3;
    char dest3[3];
	printf("src3: %s\n", src2);
	ft_strlcpy(dest3, src3, size3);
	printf("dest3: %s\n", dest3);
	printf("Retorno: %d\n", ft_strlcpy(dest3, src3, size3));
	printf("***\n");
	printf("EX 10 -------- \n");
	printf("\n");
}