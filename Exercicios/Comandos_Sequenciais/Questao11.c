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
    int notaDuz, notaDois, notaCinco, notaCem, notaCinquen, notaVinte, notaDez, resto;

    printf("Informe o valor da compra do cliente: ");
    scanf("%f", &valorCompra);
    printf("\nAgora informe o valor pago pelo cliente: ");
    scanf("%f", &valorPago);

    troco = valorPago - valorCompra;
    resto = troco;

    notaDuz =  troco / 200;
    resto = resto - (notaDuz * 200);

    notaCem =  troco / 100;
    resto = resto - (notaCem * 100);

    notaCinquen = resto / 50;
    resto = resto - (notaCinquen * 50);

    notaVinte = resto / 20;
    resto = resto - (notaVinte * 20);

    notaDez = resto / 10;
    resto = resto - (notaDez * 10);

    notaCinco = resto / 5;
    resto = resto - (notaCinco * 5);

    notaDois = resto / 2;
    resto = resto - (notaDois * 2);

    // Convertendo o resto para centavos...

    notaDuz = resto / 200;
    resto = resto % 200;

    notaCem = resto / 100;
    resto = resto % 100;

    notaCinquen = resto / 50;
    resto = resto % 50;

    notaVinte = resto / 20;
    resto = resto % 20;

    notaDez = resto / 10;
    resto = resto % 10;

    notaCinco = resto / 5;
    resto = resto % 5;

    notaDois = resto / 2;
    resto = resto % 2;
    
    
    printf("Você deve devolver ao cliente R$%.2f . \n", troco);
    printf("R$100.00: %d Notas | R$50.00: %d Notas | R$20.00: %d Notas | R$10.00: %d Notas |\n", notaCem, notaCinquen, notaVinte, notaDez);

    return 0;
}