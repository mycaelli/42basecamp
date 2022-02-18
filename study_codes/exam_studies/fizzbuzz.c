/*
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$> 
*/

#include <unistd.h>
#include <stdio.h>

void turn_char(int n);

int main(void)
{
	int i;

	i = 0;
	
	while (++i <= 100)
	{
		///printf("valor do i: %d\n", i);
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{ 
			turn_char(i);
			write(1, "\n", 1);
		}
	}

	return 0;
}

void turn_char(int n)
{
	char conv;
	int mod;
	if(n <= 9)
	{ 
		conv = n + '0';
		write(1, &conv, 1);
	}
	else
	{
		turn_char(n/10);
		mod = n % 10;
		conv = mod + '0';
		write(1, &conv, 1);
	}
}

/*
1234
1234 / 10 -> 123

123
123 / 10 -> 12

12
12 / 10 -> 1

*/
