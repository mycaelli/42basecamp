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
    //printf("%s\n", src);
    
    initialize(dest, size);
    //printf("%s\n", src);
    
    unsigned int i;

    //printf("%s\n", src);

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
        
    //printf("%s\n", src);
    printf("%s\n", dest);

    return src_size;
}

unsigned int len(char *src)
{
    int i = 0;
    while (src[i])
        i++;
    
    //printf("%d\n", i);
    
    return (i); 
}

void initialize(char *dest, unsigned int size)
{
    //inicializa o dest com \0
    unsigned int i;

    i = 0;
    while (i <= size-1) 
    {
        dest[i] = 0;
        i++;
    }

    //printf("%s\n", dest);
}


int main()
{
   
    //char src[] = "abcdef";
    //unsigned int size = 10;
    //char dest[10];
    
    //char src[] = "abcdef";
    //unsigned int size = 3;
    //char dest[3];
    
    char src[] = "abcdef";
    unsigned int size = 6;
    char dest[6];
    
    //printf("%s\n", src);
    ft_strlcpy(dest, src, size);
    //printf("%s\n", src);
}