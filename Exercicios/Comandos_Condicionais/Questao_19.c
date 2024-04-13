#include <stdio.h>

/*Escreva um algoritmo que recebe trˆes valores inteiros e mostre o valor do maior
nu´mero digitado pelo usua´ rio.*/

float maior(float a, float b, float c);

int main(){

    float n1, n2, n3;

    printf("Informe o valor(1): ");
    scanf("%f", &n1);

    printf("Informe o valor(2): ");
    scanf("%f", &n2);

    printf("Informe o valor(3): ");
    scanf("%f", &n3);
    
    float result = maior(n1, n2, n3);
    printf("O maior valor é %.2f", result);

    return 0;
}

float maior(float a, float b, float c){

    float m;

    if(a > b){
        m = a;

    }else if(b > c){
        m = b;

    }else{
        m = c;

    }

    return m;
}