#include <stdio.h>

/*Fac¸a um algoritmo que recebe um valor inteiro, caso esse n´uumero seja positivo,
mostre o valor digitado, caso seja negativo mostre o valor digitado com o sinal invertido.*/

int modulo(int a){

    int n = a * -1;
    return (n >= 0) ? a : n ;
}

int main(){

    int valor, result;

    printf("Informe o valor que você deseja analizar: ");
    scanf("%d", &valor);

    result = modulo(valor);
    printf("%d", result);
    
/*    if (valor >= 0){
        printf("%d \n", valor);

    }else{
        printf("%d \n", result);

    }

    return 0;
}

int modulo(int a){

    int n = a * -1;
    return n;
}*/

    return 0;
}

