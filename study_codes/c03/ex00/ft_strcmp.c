/*
Reproduzir de forma idêntica o funcionamento da função strcmp (man strcmp)

The  strcmp()  function  compares the two strings s1 and s2.
The locale is not taken into account (for a locale-aware comparison, see strcoll(3)).  
It returns an integer less than, equal to, or greater than  zero  if
s1 is found, respectively, to be less than, to match, or be greater than s2.

The strncmp() function is similar, except it compares only the first (at most) n bytes of s1 and s2.

if Return value < 0 if the first non-matching character in str1 is lower (in ASCII) than that of str2

if Return value > 0 if the first non-matching character in str1 is greater (in ASCII) 
					than that of str2

if Return value = 0 if strings are equal
*/

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int    ft_strcmp(char *s1, char *s2)
{
    int i;
  
    i = 0;
    while (*s1 || *s2)
    {
        i = (*s1 - *s2);
        s1++;
        s2++;
        if (i != 0)
            return (i);
    }    
    return (0);
}

int main()
{
	printf("%d\n", ft_strcmp("abcda", "abcdf"));
	printf("%d\n", strcmp("abcdf", "abcde"));
}