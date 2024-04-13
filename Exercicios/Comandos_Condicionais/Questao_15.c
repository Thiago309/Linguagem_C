#include <stdio.h>

/*Fac¸a um algoritmo que recebe um valor e mostra se o mesmo ´e par ou impar.*/


int analitic(int n){
    
    int n1 = n % 2;
    return n1;
}

int main(){

    int valor, resul;

    printf("Informe o numero que você deseja analizar: ");
    scanf("%d", &valor);

    resul = analitic(valor);

    if(resul != 0){
        printf("O numero informado é impar!");

    }else{
        printf("O numro informado é par!\n");

    }

    return 0;
}