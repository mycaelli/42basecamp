find -type f -name "*.sh" -execdir basename {} .sh \;  

//find -> procura recursivamente nos diretórios 
//type -f -> procura arquivos (files)
//name "*.sh" -> pega os arquivos que tem .sh no nome
//execdir -> tipo o pip. Aplica o comando nos resultados encontrados
//basename -> tira o diretório e o sufixo dos nomes dos arquivos
//{} -> temporariamente guarda a informação coletada na chaves
//.sh -> retira a extensão .sh
//\; -> delimitador (determina como se lida expressão resultada
		-> the -exec command will be repeated for each result separately)
