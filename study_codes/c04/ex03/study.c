/*
	itera com o endereço por str enquanto o caracter não for um numero
		checa se o valor é -
			se for incrementa uma variavel count
				se count for impar -> numero é negativo
				se count for par -> numero é positivo
	
	le o endereço restante -> deve ser o primeiro numero <- enquanto o caracter analisado for um numero
		transforma cada caracter em inteiro -> int x = character - '0'; 
			quando o caracter analisado deixar de ser um numero sai do while
	
	retorna o numero transformado
*/

#include <stdio.h>

int check_signal(char *str)
{
	/*
		itera com o endereço por str enquanto o caracter não for um numero
		checa se o valor é -
			se for incrementa uma variavel count
				se count for impar -> numero é negativo
				se count for par -> numero é positivo
	*/
	int count;

	count = 0;
	while (*str < '0' || *str > '9')
	{
		if(*str == '-')
			count++;
		str++;
	}
	//printf("%d\n", count);
	//printf("%c\n", *str);
	return count;
}

char *find_numbers(char *str)
{
	while (*str < '0' || *str > '9')
		str++;
	
	//printf("char inicial find: %c\n", *str);

	return str;
}

int check_num(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i]) //encontra o len
	{ 
		//printf("%c", str[i]);
		i++;

	}
//	printf("\n");
//	printf("\n");
	while ((str[j] < '0' || str[j] > '9') && str[j]) //encontra os não numericos
	{ 
		//printf("%c", str[j]);
		j++;
	}
	printf("i: %d\n", i);
	printf("j: %d\n", j);
	if (i == j)
	{ 
		return 0;
	}
	return 1;

}

int ft_atoi(char *str)
{
	/*
		le o endereço restante -> deve ser o primeiro numero <- enquanto o caracter analisado for um numero
		transforma cada caracter em inteiro -> int x = character - '0'; 
			quando o caracter analisado deixar de ser um numero sai do while
	*/
	int signal;
	char *n_str;
	int check_number = check_num(str);	

	if (check_number == 0) //nao tem numeros em str
		return 0;
	
	signal = check_signal(str);
	n_str = find_numbers(str);

	int num = 0;
	while (*n_str >= '0' && *n_str <= '9')
	{
		num = num * 10 + (*n_str - '0');
		//printf("%d\n", x);
		n_str++;
	}

	//checar se signal é par ou impar
	if (signal % 2 == 0)
		return num;
	else
		return num*(-1);
}


int main()
{
	char a[] = "X    ---+--+1234ab567";
	//check_signal(a);
	//printf("char inicial main: %c\n", *a);
	//find_numbers(a);
	printf("%d\n", ft_atoi(a));
}
