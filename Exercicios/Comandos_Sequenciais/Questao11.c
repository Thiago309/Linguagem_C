# include <stdio.h>
# include <locale.h>

/*
Questa˜o 11. Fac¸a um algoritmo que auxiliara´ um funciona´ rio de um caixa de supermercado. O
algoritmo devera´ receber como entrada o valor da compra do cliente e o valor pago pelo cliente,
em seguida o algoritmo devera´ apresentar o troco da compra, de forma que o mesmo deve
apresentar a quantidade de c ´ edulas e moedas para compor o troco do cliente.
*/

int main(){

    float valorCompra, valorPago, troco;
    int notaCem, notaCinquen, notaVinte, notaDez, resto;

    printf("Informe o valor da compra do cliente: ");
    scanf("%f", &valorCompra);
    printf("\nAgora informe o valor pago pelo cliente: ");
    scanf("%f", &valorPago);

    troco = valorPago - valorCompra;
    resto = troco;

    notaCem =  resto % 100;
    notaCinquen = resto % 50;
    notaVinte = resto % 20;
    notaDez = resto % 10;
    
    printf("Você deve devolver ao cliente R$%.2f . \n");
    printf("R$100.00: %d Notas | R$50.00: %d Notas | R$20.00: %d Notas | R$10.00: %d Notas |\n", notaCem, notaCinquen, notaVinte, notaDez);

    return 0;
}