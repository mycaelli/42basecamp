/*
Caracteres não imprimíveis são partes de um conjunto de caracteres que não representam um símbolo 
escrito ou parte do texto em um documento ou código, mas existem no contexto de sinal e controle na 
codificação de caracteres. Eles são usados ​​para informar aos processadores de texto e a certos aplicativos,
como navegadores da Web, a aparência de um documento
*/

int	ft_str_is_printable(char *str);

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		//antes do space ou o del
		if (str[i] < 32 && str[i] != 127)
			return (0); //é um caracter nao imprimivel
		i++;
	}
	return (1); //caracter imprimivel
}
