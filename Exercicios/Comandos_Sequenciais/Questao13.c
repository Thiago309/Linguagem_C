# include <stdio.h>

int main(){

    float precoAuto, precoFabrica, valorRevenda, valorImposto, impostos = 0.45, revenda = 0.28;

    printf("Informe o preço de frabrica do veiculo: ");
    scanf("%f", &precoFabrica);

    valorImposto = precoFabrica * impostos;
    valorRevenda = precoFabrica * revenda;

    precoAuto = precoFabrica + valorRevenda + valorImposto;

    printf("O preço de fabrica do seu veiculo é: R$%0.2f.", precoAuto);

    return 0;
}