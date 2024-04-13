#include <stdio.h>

/*Fac¸a um algoritmo que recebe um valor inteiro e mostra se o valor ´e zero, positivo
ou negativo.*/

int main(){

    float valor;

    printf("Digite o valor que você deseja analizar: ");
    scanf("%f", &valor);

    if (valor == 0){
        printf("O valor é zero.");

    }else if (valor > 0){
        printf("O valor é positivo.");

    }else{
        printf("O valor é negarivo.");

    }


    return 0;
}