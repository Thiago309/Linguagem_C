#include <stdio.h>

/*Questão 20. Escrever um algoritmo que leia trˆes valores inteiros distintos e os escreva em ordem
crescente.*/

int ordem(int a, int b, int c);

int main(){

    int a, b, c, m1, m2, m3;

    printf("Informe o valor(1): ");
    scanf("%d", &a);
    
    printf("Informe o valor(2): ");
    scanf("%d", &b);

    printf("Informe o valor(3): ");
    scanf("%d", &c);


    if(a < b && a < c){
        m1 = a;
        if(b < c){
            m2 = b;
            m3 = c;

        }else{
            m2 = c;
            m3 = b;
        }

    }else if(b < a && b < c){
        m1 = b;
        if(a < c){
            m2 = a;
            m3 = c;

        }else{
            m2 = c;
            m3 = a;

        }
    
    }else{
        m1 = c;
        if(a < b){
            m2 = a;
            m3 = b;
            
        }else{
            m2 = b;
            m3 = a;
        }
    }

    printf("A ordem dos valores são: %d, %d, %d", m1, m2, m3);

    return 0;
}