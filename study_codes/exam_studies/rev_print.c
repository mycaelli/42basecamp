/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that print a string but in reverse order.
It must return its parameter.
Beware that the string wont be modifiable.
Your function must be declared as follows:

char    *rev_print(char *str);

Examples:

$> ./a.out | cat -e
hsad wobniar$
emosewa era seinoP$
$
$>
*/

#include <stdio.h>
#include <unistd.h>

char *rev_print(char *str)
{
	int i;

	i = 0;
	while(str[++i]);
	while(i >= 0)
		write(1, &str[i--], 1);

	printf("\n");

	return str;
}

int main()
{
	rev_print("bala");
	rev_print("rapadura");
}