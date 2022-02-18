int		ft_atoi(char *str);
int		check_num(char *str);

#include <stdio.h>

int ft_atoi(char *str)
{
	int check_number = check_num(str);	

	if (check_number == 0) //nao tem numeros em str
		return 0;

	return 1;
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

int main()
{
	printf("\n");
	char f[] = "   ----++++-akidued*&)jmswdw";
	printf("String de entrada:   ----++++-aki1dued*&)jm\n");
	printf("Resultado esperado: 0\n");
	printf("Resultado obtido: %d\n", ft_atoi(f));
	//ft_atoi(f);
	printf("\n");
}