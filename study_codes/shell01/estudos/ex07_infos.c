cat /etc/passwd

export FT_LINE1=7
export FT_LINE2=15

cut -d':' -f1
//-d -> delimitador -> o delimitador deixa de ser ' ' e passa a ser ':'
// -f1 -> delimita apenas a primeira coluna 
/*sempre que tiver dois pontos marca uma coluna e  imprime apenas uma coluna*/
ele corta partes de um arquivo por linha, posição de byte ou caracter etc
Basically the cut command slices a line and extracts the text
- d':' -> considera o : como um campo separador, um delimitador das colunas no caso
- f -> seleciona o campo (field) que quer cortar 

sed -n 'n;p'
-> n = nao print
-> p -> print
-> nao printa a primeira linha e printa a segunda 

rev 
-> inverte as palavras

sort -dr
-> d ordem alfabetica
-> r reversa


sed -z 's/\n/, /g'
-> coloca a virgula 
-> para de separar as linhas por newline character
-> The -z option will cause sed to separate lines based on the ASCII NUL 
character instead of the newline character.

sed 's/, $ /./'
-> substitui a virgula da ultima posição por um ponto final 

/g -> aplica em todas as ocorrencias 
-> tira todas as quebras de linha e muda por virgula 
-> g = global


cat /etc/passwd | cut -d':' -f1 | sed -n 'n;p' | rev | sort -r | sed "$FT_LINE1, $FT_LINE2"'!d' | sed -z 's/\n/, /g;s/, $/./'


FT_LINE1 = 7
FT_LINE2 = 15