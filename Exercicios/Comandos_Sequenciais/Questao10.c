# include <stdio.h>
# include <locale.h>

/*
Fac¸a um algoritmo que mostra a quantidade de c ´ edulas de um caixa eletrˆonico de
um banco. O algoritmo recebe como entrada o valor inteiro a ser sacado pelo cliente, em 
seguida apresente a quantidade de cada ce´dula que o cliente devera´ receber, de forma 
que a quantidade de c ´ edulas seja o menor poss´ıvel.
*/

int main(){

    float valorSaque, saldo = 1000.00;
    int notaCem, notaCinquen, notaVinte, notaDez, resto;

    printf("Seu saldo inicial é: R$%.2f.\n", saldo);
    printf("Informe o valor que você deseja sacar de sua conta: ");
    scanf("%f", &valorSaque);

    saldo = saldo - valorSaque;
    resto = valorSaque;

    printf("\nVocê sacou R$%.2f. Agora resta R$%.2f em sua conta.\n", valorSaque, saldo);
    
    notaCem =  resto % 100;
    notaCinquen = resto % 50;
    notaVinte = resto % 20;
    notaDez = resto % 10;

    printf("As quantidades de notas sacadas serão...\n");
    printf("R$100.00: %d Notas | R$50.00: %d Notas | R$20.00: %d Notas | R$10.00: %d Notas |", notaCem, notaCinquen, notaVinte, notaDez);

    return 0;
}