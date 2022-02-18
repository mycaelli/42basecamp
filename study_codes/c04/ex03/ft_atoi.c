int		ft_atoi(char *str);
int		check_signal(char *str);
char	*find_numbers(char *str);
int		check_num(char *str);

int ft_atoi(char *str)
{
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
		n_str++;
	}
	if (signal % 2 == 0)
		return (num);
	else
		return (num*(-1));
}

int check_signal(char *str)
{
	int count;

	count = 0;
	while (*str < '0' || *str > '9')
	{
		if(*str == '-')
			count++;
		str++;
	}
	return count;
}

char *find_numbers(char *str)
{
	while (*str < '0' || *str > '9')
		str++;

	return str;
}

int check_num(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i]) //encontra o len
		i++;
	while ((str[j] < '0' || str[j] > '9') && str[j]) //encontra os não numericos
		j++;
	if (i == j)
		return 0;
	
	return 1;
}
