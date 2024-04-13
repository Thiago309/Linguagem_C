#include <stdio.h>

/*As mac¸as custam R$0.30 cada, se forem compradas menos do que uma d´ uzia, e
R$0.25 se forem compradas pelo menos doze. Escreva um algoritmo que leia o n´umero de mac¸as
compradas, calcule e mostre o valor total da compra.*/

float duzias(int a){

    float n1 = 0.30, n2 = 0.25;
    return (a < 12) ? n1 : n2;
}

int main(){

    int qtd;
    float valor, result;
    printf("Informe a quantidade de maçãs que você deseja comprar: ");
    scanf("%d", &qtd);

    result = duzias(qtd);
    valor = result * qtd;

    printf("O valor total da sua compra é: %.2f", valor);

    return 0;
}

