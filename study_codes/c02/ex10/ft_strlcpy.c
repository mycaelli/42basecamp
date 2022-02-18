/*
Para testar a strlcpy original, você deve compilar o exercício com a
flag -lbsd, ex: gcc -Wall -Werror -Wextra -lbsd test.c

Reproduzir de forma idêntica o funcionamento da função strlcpy
*/

#include <stdio.h>
#include <stdio.h>

unsigned int     ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int     size(char *src);
unsigned int    len(char *src);
void initialize(char *dest, unsigned int size);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    
    unsigned int src_size = len(src);
    initialize(dest, size);  
    unsigned int i;

    i = 0;

        if (size-1 <= src_size)
        {
           while (i < size-1)
        	{
            	dest[i] = src[i];
            	i++;
        	}
        }
        else
        {
            while (i < src_size)
          	{
            	dest[i] = src[i];
            	i++;
          	}
        } 
    return src_size;
}

unsigned int len(char *src)
{
    int i = 0;
    while (src[i])
        i++; 
    return (i); 
}

void initialize(char *dest, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i <= size-1) 
    {
        dest[i] = 0;
        i++;
    }
}
