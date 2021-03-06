#include <stdio.h>
#include <stdlib.h>

int digit = 42;

--------------------------------------------------------------------------------------
& -> retorna o endereço 
* -> avalia o valor do endereço de memória (retorna o valor)

#### EXEMPLO 1 #####
char h; 
h = '4';
&h -> endereço onde h esta armazenado 
*h -> procura o que esta no endereço de memoria com o valor traduzido da tabela ascii (Ox52)
*&h -> retorna o 4
	- puxa o endereço de h e desse endereço puxa o valor 


#### EXEMPLO 2 ####
char * string; (uma variavel de string que aponta para char)
char *string = "Hello";
string -> endereço de memória 
*string -> valor de string, retorna o H
string[0] -> pega o endereço string e retorna o valor do primeiro endereço de memória 
	- string[0] == *string
string[1] -> == *(string+1)
--------------------------------------------------------------------------------------



------------------------------------------------------------------------------------------------
void	pointers_geral()
{ 
	
	//imprime o endereço no qual digit está alocado
	printf("The address of digit = %p\n",&digit);

	//imprime o valor que está no endereço de digit
	//dereferencing -> pega o endereço de digit e 
		//retorna o valor contido nele
	printf("The value of digit = %d\n", *(&digit));
}

void	pointers_var()
{
	//ponteiro é uma variável que guarda um endereço de memória
	//dataType_variavel *pointerVariableName = &variableName;
		//dataType -> da variável cujo endereço queremos guardar

	int *address_of_digit = &digit;
	//int -> indica que address_of_digit só pode guardar endereços de tipos inteiros 

	//printa o endereço da variável digit
	printf("The address of digit = %p\n", address_of_digit);

	//printa o valor da variável digit
	printf("The value of digit = %d\n", *address_of_digit);
}


void	wild_pointer()
{
	//wild pointers -> ponteiros não inicializados, guardam um valor "lixo"

	
	char *alphabetAddress; // uninitialised or wild pointer 
	char alphabet = "a";
	alphabetAddress = &alphabet; // now, not a wild pointer 
	
}


void	null_pointer()
{
	//evita wild pointers
	char *alphabetAddress = NULL
	//null pointer points at nothing, 
		//or at a memory address that users can not access
}

void void_pointer()
{
	/*
		void pointer can be used to point at a variable of any data type. It can be reused to point at any data type we want to
		obs: also known as generic pointers
		!!!  cannot be dereferenced as any other pointer
	*/
	void *pointerVariableName = NULL;

	int number = 54;
	pointerVariableName = &number;
	printf("The value of number = %d\n", *(int *)pointerVariableName); //??????????/

	char alphabet = 'z';
	pointerVariableName = &alphabet;
	printf("The value of alphabet = %c\n", *(char *)pointerVariableName); //????????/
}

void	dangling_pointer()
{
	/*
		dangling pointer points to a memory address which used to hold a variable
	*/
	int *ptr;
	ptr = (int *)malloc(sizeof(int));
	*ptr = 1;
	printf("%d\n", *ptr); //printa 1
	free(ptr); //desaloca -> tira o 1 de dentro
	*ptr = 5;
	printf("%d\n", *ptr); /* may or may not print 5 */

	/*
		Though the memory has been deallocated by free(ptr), the pointer to integer ptr still points to that unreserved memory address
	*/	
}