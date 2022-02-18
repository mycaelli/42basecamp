//cria a variavel de ambiente com o usuario logado

//export FT_USER=$USER  -> remover

//groups lista os grupos do qual um usuário faz parte
//tr substitui os espaços por virgulas

groups $FT_USER | tr "[:space:]" "," | tr -d "\n"


//space -> blank

// #!/bin/sh -> diz pro script executar o binario sh