# include <stdio.h>
# include <locale.h>

/*
Questa˜o 7. Fazer um algoritmo que calcule e mostre a 
a´ rea e o volume de um cilindro.
(A = 2πr(h + r), V = πr2h)
 */

int main(){

    float A, V, r, h;
    const float pi = 3.14159;

    printf("Informe o valor do raio do cilindro: ");
    scanf("%f", &r);

    printf("Agora informe o valor da altura do cilindro: ");
    scanf("%f", &h);

    A = 2 * pi * r * (h + r);
    V = pi * r * r * h;

    printf("A área do cilindro é: %.2fcm² e seu volume é: %.2fcm³.", A, V);

    return 0;
}