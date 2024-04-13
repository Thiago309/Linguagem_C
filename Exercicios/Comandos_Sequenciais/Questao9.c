# include <stdio.h>
# include <locale.h>

/*
Questa˜o 9. Ler dois valores para as varia´ veis A e B, e efetuar as trocas dos 
valores de forma que a varia´ vel A passe a possuir o valor da varia´ vel B e a 
varia´ vel B passe a possuir o valor da varia´ vel A. Apresentar os valores trocados.
*/

int main(){

    int a, b, c;

    printf("Informe o valor A: ");
    scanf("%d", &a);
    printf("Valor A: %d\n", a);
    

    printf("\nInforme o valor B: ");
    scanf("%d", &b);
    printf("Valor B: %d\n", b);

    c = a;
    a = b;
    b = c;

    printf("\nValor A': %d", a);
    printf("\nValor B': %d\n", b);

    return 0;
}