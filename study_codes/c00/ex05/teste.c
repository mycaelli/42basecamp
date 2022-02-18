/*
// REGRAS 
	1 - 3 unidades cada numero 
	2 - ordem crescente
	3 - algarismos em ordem crescente -> X 021 022  X
	4 - acaba em 789


012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789
023 024 025 026 027


*/

#include <unistd.h>
void ft_print_comb(void)
{
	char num[3]; //declara um array de 3 posições 

	//colocar valores dentro do array
	num[0] = '0';
	num[1] = '1';
	num[2] = '2';

	//termina no 789
	while (num[0] <= '7') 
	{
		while (num[1] <= '8')
		{
			while (num[2] <= '9')
			{
				write(1, num, 3);
				if (num[0] < '7')
					write(1, ", ", 2);
				num[2]++;
			}
			num[1]++;
			num[2] = num[1] + 1; //reseta o valor do terceiro algarismo e garante que ele seja sempre maior que o valor do segundo algarismo
		}
		num[0]++; //centena
		num[1] = num[0] + 1; //dezena
		num[2] = num[1] + 1; //terceiro algarismo -> unidade
		
	}
}

int main ()
{
	ft_print_comb();
}