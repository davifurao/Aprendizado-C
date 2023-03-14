//Autor: Davi Souza de Luna
//O código pode ser reutilizado sem restrições para uso,modificação e distribuição.

//OBS: nesse Código não há boas práticas, pois estou em aprendizado sobre as mesmas. Estou utilizando práticas do JAVA.


#include <stdio.h>//cabeçalho da biblioteca stdio. Nessa biblioteca
//é incluido algumas funções: std(standard), io(input e output). Portanto são funções de entrada e saída.
#include <math.h> //funções matemáticas
#include <stdlib.h>//funções gerais
#include <string.h>//biblioteca de manipulação de strings

int main(){
    int valor1,valor2,soma;//declaração dos valores
    printf("Digite o primeiro número em inteiro: ");//método que vai printar no terminal o recado que está entre aspas
    scanf("%d",&valor1);//análogo ao Scanner de Java, o mesmo irá ler a entrada do teclado. O %d é para identificar que o tipo de entrada é um tipo inteiro
    printf("Digite o segundo número: ");//método que vai printar no terminal o recado que está entre aspas
    scanf("%d",&valor2);
    
    soma=valor1+valor2;//operação de soma
    printf("%d\n",soma);//impressão da variável soma
    return 0;//término do programa, retira o mesmo da memória

}


//OBS: O printf não precisa de um ponteiro. Então a variável soma é representada como "soma". Já no scanf, como é preciso de um ponteiro para armazenar o valor, então colocamos o "&"
