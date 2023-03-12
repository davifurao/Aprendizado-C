#!/bin/bash

if command -v gcc >/dev/null 2>&1; then
    input_file=$1 #É o primeiro argumento na linha de comando. Vamos supor que o nome do arquivo é "arquivo.c"

    output_file=${input_file%.*} #Aqui tira-se a extensão do arquivo. Então, seguindo o exemplo anterior, ficaria "arquivo"

    gcc -o $output_file $input_file #compilação. No caso seria análogo, utilizando o exemplo, a "gcc -o arquivo arquivo.c"

    ./$output_file #execução do binário. No exemplo, seria "./arquivo"
else
    echo "O GCC não está instalado."
        if command -v apt-get >/dev/null 2>&1; then
            sudo apt-get update
            sudo apt-get install -y gcc
            echo "O GCC foi instalado com sucesso"
        elif command -v yum >/dev/null 2>&1; then
            sudo yum install -y gcc
            echo "O GCC foi instalado com sucesso"
        elif command -v pacman >/dev/null 2>&1; then
            sudo pacman -S --noconfirm gcc
            echo "O GCC foi instalado com sucesso"
        elif command -v dnf >/dev/null 2>&1; then
            sudo dnf install -y gcc
            echo "O GCC foi instalado com sucesso"
        else
            echo "Não foi possível determinar o gerenciador de pacotes ou o GCC não está disponível para essa distribuição linux"
        fi


fi

#Autor: Davi Souza de Luna


#Como deverá ser executado o arquivo ? 
#bash [nome-desse-arquivo-com-a-extensão] [nome do arquivo em C que queremos compilar]

#OBS: eu coloquei o nome desse arquivo como não fixo pois posteriormente eu poderei querer alterar o nome do mesmo para facilitar

#Exemplo: O nome do arquivo em C que eu quero compilar é Davifurasso.C e o nome desse arquivo é compilador.bash
#Os dois arquivos (O arquivo bash e o arquivo C) deverão estar no mesmo diretório
#O comando é: 
#bash compilador.bash Davifurasso.C
