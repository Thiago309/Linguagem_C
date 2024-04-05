# include <stdio.h>
# include <locale.h>

/*
Questa˜o 8. Escreva um algoritmo que recebe o valor do sala´ rio fixo e o 
total de vendas efetuadas por um vendedor de uma loja durante o mˆes (em dinheiro). 
Sabendo que este vendedor ganha 15% de comissa˜o sobre suas vendas efetuadas, 
informar o sala´ rio fixo e sala´ rio no final do meˆs.
*/
int main(){
    
    /*
    salarioFx => salario fixo
    salarioF
    vendasT => Vendas Totais do vendedor
    com => comissão 15%
    */

    float salarioFx, vendasT, salarioF, com = 0.15;

    printf("Informe o valor do salario fixo do vendedor: ");
    scanf("%f", &salarioFx);

    printf("Informe o valor do total de vendas mensal do vendendor: ");
    scanf("%f", &vendasT);

    salarioF = salarioFx + (vendasT * com);

    printf("Seu salario fixo é R$%.2f e salario final é: R$%.2f.",salarioFx ,salarioF);

    return 0;
}