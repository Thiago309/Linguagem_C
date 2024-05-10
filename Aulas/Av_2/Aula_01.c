#include <stdio.h>

int tam[2];
/*
#define valor 3


    %i e %d = inteiro
    %f e %lf = Real
    %c e %s = texto
    %p = endereço de memória
*/

int main(){
    
    /*
    const int letra = 80;
    float media[valor];
    char nome[letra];
    int idade[30];
    int x[3], y[4];
    
    printf("\n x = %p e y = %p", x, y);
    
    tam[0]=22;
    tam[1]=432;
    printf("%d", tam[1]); //O pragrama exibe o valor de tam[1].
    */

    for(int cont = 0; cont<3; cont++){
        printf("Digite o valor para o vetor tam[%i]: ", cont);
        scanf("%i", &tam[cont]);
    }

    return 0;
}