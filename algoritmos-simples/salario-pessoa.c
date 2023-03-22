// O programa lê quantos salários mínimos a pessoa ganha a partir
// da variável salário mínimo

#include <stdio.h>


int main() {
    //Nesse problema todas as variáveis serão inputadas no terminal, incluindo o salário minimo

    float salarioMinimo,salarioUsuario,quantiaSalarios;//A variável deverá ser previamente declarada antes de qualquer coisa


    printf("qual o valor do Salario minimo ?\n");
    scanf("%f",&salarioMinimo);
    printf("Escreva o valor do seu salário\n");
    scanf("%f",&salarioUsuario);
    quantiaSalarios=(salarioUsuario/salarioMinimo);
    printf("você possui um total de %.2f salarios minimos",quantiaSalarios );
    return 0;


}
