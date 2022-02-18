#include <stdio.h>
#include <string.h>//necessário para strcat

int main (void)
{
    char dest2[50] = "string original + "; //a == a
    char src2[] = " vamo ver se funfa";
    strcat(dest2, src2);
    //printf("str = %s\n", dest2);

	int i = 0;
	while (dest2[i] != '\0')
	{
		printf("%c", dest2[i]);
		i++;
	}
	printf("\n");
	printf("%d\n", i);
  return 0;
}