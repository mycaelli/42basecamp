------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ### VARIÁVEIS DE AMBIENTE ###

link útil: https://www.digitalocean.com/community/tutorials/how-to-read-and-set-environmental-and-shell-variables-on-linux-pt

// IMPRIME O CONTEÚDO DE UMA VARIÁVEL 
	echo $TEST_VAR

// #DEFINIR A VARIÁVEL // TRANSFORMANDO DE VARIÁVEL SHELL PARA AMBIENTE
	export TEST_VAR="Testing export"

// #IMPRIME TODAS AS VARIÁVEIS DE AMBIENTE 
	printenv ou env

// #IMPRIME UMA VARIÁVEL DE AMBIENTE 
	printenv | grep TEST_VAR

// #MUDANDO DE VARIÁVEL DE AMBIENTE PARA VARIÁVEL SHELL
	export -n TEST_VAR

// #EXCLUIR VARIAVEIS DE AMBIENTE OU SHELL 
	unset TEST_VAR

// #VARIÁVEIS DE AMBIENTE X VARIÁVEIS DE SHELL
	As variáveis de ambiente são variáveis definidas para a sessão atual do shell e são herdades por qualquer shell ou processo filho. 
		As variáveis de ambiente são usadas para passar informações para processos gerados a partir do shell.
	As variáveis de shell são variáveis contidas exclusivamente no shell no qual foram configuradas ou definidas. 
		Geralmente, elas são usadas para manter o controle de dados efêmeros, como o diretório de trabalho atual.

// #IMPRIME VARIÁVEIS DE SHELL	
	set | grep TEST_VAR

// #BASHRC 
	//The ~/.bashrc file is a script that is run each time you log in. 
	//By adding your export statements to it, your environmental variables will be added for each session you log in to
	nano ~/.bashrc //abre o arquivo
	export VARNAME=value //Cria a variável
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ### GRUPOS ####
	a group is a collection of users
	The main purpose of the groups is to define a set of privileges like read, write, or execute permission 
	for a given resource that can be shared among the users within the group.

link útil: https://linuxize.com/post/how-to-list-groups-in-linux/#:~:text=In%20Linux%2C%20a%20group%20is,utilize%20the%20privileges%20it%20grants.

// LISTAR OS GRUPOS QUE O USUÁRIO LOGADO FAZ PARTE 
	groups 

// LISTAR OS GRUPOS QUE UM USUÁRIO ESPECÍFICO FAZ PARTE
	groups nome_usuário
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ### GREP ###
		grep searches one or more input files for lines that match a given pattern and writes each matching line to standard 
		output. If no files are specified, grep reads from the standard input, which is usually the output of another command

link útil -> https://linuxize.com/post/how-to-use-grep-command-to-search-files-in-linux/

link super útil ->	https://docs.oracle.com/cd/E19504-01/802-5826/6i9iclf5k/index.html

https://www.cyberciti.biz/faq/howto-use-grep-command-in-linux-unix/

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ### TR ###
	Translate,  squeeze, and/or delete characters from standard input, writing to standard output.

link útil -> https://www.geeksforgeeks.org/tr-command-in-unix-linux-with-examples/

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------