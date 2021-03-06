ifconfig -a | grep "ether" | sed 's/ *ether *//'

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ### MAC ###
	//rg da placa de rede

	é um endereço físico e único, que é associado à interfaces de comunicação 
	utilizadas em dispositivos de rede.
	Um endereço MAC é o identificador único que é atribuído pelo fabricante a uma peça do hardware 
	de rede (como uma placa de rede sem fio ou uma placa ethernet). 
	MAC significa Media Access Control, ou controle de acesso ao meio, e cada identificador tem a 
	intenção de ser único para um dispositivo em particular.
	tem como objetivo identificar individualmente cada computador a partir da fábrica

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ### IFCONFIG ###
	- configura a interface de rede

	-a     display all interfaces which are currently available, even if down
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ### GREP ###
	Este comando procura padrões em um arquivo

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ### SED ###
	ferramenta de edição de arquivos ou de formatação de resultados de comandos
	A sintaxe especifica “s” na operação de substituição. Os “/” são delimitadores.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////