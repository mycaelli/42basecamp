ls -l | sed -n "p;n"


//ls -> lista o conteúdo de um diretório
//-l -> lista permissões, número de entidades

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ### SED ###
	ferramenta de edição de arquivos ou de formatação de resultados de comandos
	A sintaxe especifica “s” na operação de substituição. Os “/” são delimitadores.

	//aplica um comando p pra uma linha e um comando n pra outra

//-n -> pra só fazer o comando que tiver entre aspas
//sed 
//p -> printa tudo 
//; -> separa o comando
//n (next) -> não é pra mostrar

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////