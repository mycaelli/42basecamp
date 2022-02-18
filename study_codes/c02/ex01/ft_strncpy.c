
#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while ((src[i] != '\0') && (i < n))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}





/*
The  strcpy()  function  copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest.  
The strings may not overlap, and the destination string dest must be large enough to receive the copy.  Beware of buffer overruns!  (See BUGS.)

The strncpy() function is similar, except that at most n bytes of src are copied.  Warning: If there is no null byte among the first n bytes of src, 
the string placed in dest will not be null-terminated.

If the length of src is less than n, strncpy() writes additional null bytes to dest to ensure that a total of n bytes are written.

*/