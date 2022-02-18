#include <stdio.h>

#include <stdio.h>

char *ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	//sempre que tiver um caracter especial ou um espaço antes de uma letra
		//deixa ela maiuscula 
	//se for a primeira letra deixa maiuscula a menos que inicie com numero 
	printf("String antes do loop: %s\n", str);
	int i;

	i = 0;
	//deixa a primeira letra maiuscula
	if (str[i] >= 'a' && str[i] <= 'z') 
		str[i] -= 32;
	while(str[i])
	{
		if(((str[i] < 'a' || str[i] > 'z')) && (str[i+1] >= 'a' && str[i+1] <= 'z') 
			&& (str[i] < '0' || str[i] > '9') && (str[i] < 'A' || str[i] > 'Z'))
			 { 
			 //printf("Str[i]:%c\n", str[i]);
			 //printf("Str[i+1]:%c\n", str[i+1]);
			 str[i+1] -= 32;
			 }
			//str[i+1] -= 32;
		i++;
	}

	printf("String depois do loop: %s\n", str);
	//printf("\n");

	return str;
}

int	main()
{
	char str[] = "oi tudo bem {[knn";

	printf("String antes do loop: %s\n", str);

}