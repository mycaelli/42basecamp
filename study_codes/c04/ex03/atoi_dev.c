#include <stdio.h>


int atoi(char *str)
{
	int signal;
	int result;

	signal = 1;
	result = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str =='\v' || *str == '\f' || *str == '\r')
		str++;
	
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (*str >= '0' && *str <='9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}

	return (result * signal);
}

int main()
{
	char *str;
	str = "   			 +++----23456ndjedhu44";
	printf("%d\n", atoi(str));
}