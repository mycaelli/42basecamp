find -type f -name "*.sh" -execdir basename {} .sh \; 

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ### FIND ###
	The find command recursively searches the directory tree for each specified path parameter, 
	seeking files that match a Boolean expression.	
	The find command has two main parts to it: the expression and the action
	the -exec action allows us to execute commands on the resulting paths.

//EXECDIR
	mais seguro que o exec


//	Delimiter 
	exec é tipo o pip -> aplica o comando nos resultados
	Two types of delimiters can be provided to the -exec argument: the semi-colon(;) or the plus sign (+).
	The delimiter determines the way find handles the expression results. If we use the semi-colon (;), 
	the -exec command will be repeated for each result separately. On the other hand, if we use the plus sign (+), 
	all of the expressions’ results will be concatenated and passed as a whole to the -exec command which will run only once. 

	{} -> temporariamente guarda a informação na chave
	basename -> tira o diretório e o sufixo dos nomes dos arquivos
//basename 
link útil -> https://linux.die.net/man/1/basename


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
find . -not -type d , incluindo arquivos em subpastas
find . -maxdepth 1 -not -type d , sem incluir arquivos em subpastas

se for apenas arquivos pode usar o find -type f tambem

*/