
#include <stdio.h>

void func(int *ptr)
{
	printf("%d\n", *ptr);
}

int main ()
{
	int x = 4;
	int *ptr = &x; //& -> atribui o endereço da variavel

	//%d %s %c %p
	//printf("%p\n", ptr);
	//printf("%p\n", &x);
	printf("%d\n", x);
	printf("%d\n", *ptr);
	func(ptr);
}



//int x = 42;
//int *ptr = &x; //ptr guarda o endereço de x

//*ptr // -> acessando o valor que o endereço que o ponteiro tem possui