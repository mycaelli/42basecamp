#include "string.h"

//str len conta o \0
#undef strlcpy
size_t
//sempre adiciona um null terminator 
strlcpy(char * dst, const char * src, size_t maxlen) {
    const size_t srclen = strlen(src); //pega o tamanho da string src
	//se src com \0 for menos que maxlen
	if (srclen + 1 < maxlen) { 
        memcpy(dst, src, srclen + 1); //copia o conteudo de src para dest -> já inclui o \0
    } else if (maxlen != 0) { //src for maior que tam max
        memcpy(dst, src, maxlen - 1); //deixa um byte livre
        dst[maxlen-1] = '\0'; //ultimo pos de dest == 0
    }
    return srclen;
}

/*
char * dest
Where to copy the string to

const char * src
Where to copy the string from

size_t size
size of destination buffer
*/
/*
o que eu entendi foi que a strncpy, se não tiver um null terminator ('\0') nos primeiros n bytes (que você forneceu como parâmetro) 
da sua source, ele não adiciona um null terminator na sua dest. Já a strlcpy copia sempre n-1 da source para a dest e sempre 
adiciona um null terminator depois do que foi copiado para a dest. 

*/


array src = "acvbnjhytg";
array dest[size];

inicializa o dest com \0

se src < size
	dest = src

se src >= dest	
	ate dest-1
		dest = src