#include "ft_strcpy.c"

#include <stdio.h>

int main()
{
	char src[] = "oi";
	char dest[3];
	printf("src %s\n", src);
	ft_strcpy(dest, src);
	printf("dest: %s\n", dest);
}
