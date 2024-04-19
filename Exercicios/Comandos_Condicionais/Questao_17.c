#include <stdio.h>

/*Fac¸a um algoritmo que leia dois n´umeros e identifique se s˜ao iguais ou diferentes.
Caso eles sejam iguais, mostre uma mensagem dizendo que eles s˜ao iguais. Caso sejam diferentes,
informe qual n´umero ´e o maior, e uma mensagem que s˜ao diferentes.*/

int maior(int a, int b);

int main(){

    int n1, n2, result;

    printf("Informe o valor(1) que deseja comparar: ");
    scanf("%d", &n1);

    printf("Informe o valor(2) que deseja comparar: ");
    scanf("%d", &n2);

    result = maior(n1, n2);

    if(n1 != n2){
        printf("Os numeros são diferentes. O maior valor é %d.", result);

    }else{
        printf("Os valores são iguais.");

    }
    return 0;
}

int maior(int a, int b){

    return (a > b) ? a : b ;
}