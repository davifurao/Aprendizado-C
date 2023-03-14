#include <stdio.h>

int main(){//é importante ver o tipo da função para especificar o retorno
    float peso,altura,imc;
    printf("Escreva seu peso(em Kgs):\n");
    scanf("%f",&peso);
    printf("Agora escreva sua altura(OBS: escreva com PONTO ao invés da virgula\n) :\n");
    scanf("%f",&altura);
    imc=peso/(altura*altura);
    
    if(imc<18.5){
        printf("Seu imc é: ",imc," portanto você está numa classificação de magreza\n\n");

    }else if(imc>=18.5 && imc<=24.9){
        printf("\nSeu imc é: ",imc," portanto seu IMC é classificado como normal\n\n");
        printf("\nFim do programa :)\n\n");
        
    }else if(imc>=25 && imc<=29.9){
        printf("\nSeu imc é: %f",imc);
        printf("portanto, seu IMC é classificado como sobrepeso\n\n");
        printf("\nFim do programa :)\n\n");
    }else if(imc>=30 && imc<=30.9){
        printf("\nSeu imc é: %f", imc);
        printf(" portanto está classificado como obesidade\n\n");
        printf("\nFim do programa :)\n\n");
    }else if(imc>30){
        printf("\nSeu imc é: %f",imc);
        printf(" portanto é classificado como obesidade grave!\n\n");
        printf("\nFim do programa :)\n\n");
    }else{
        return 1;
    }

    
return 0;


}

//Autor: Davi Souza de Luna

//preciso consertar o retrabalho que estou tendo nos ifs ao escrever a mensagem final
