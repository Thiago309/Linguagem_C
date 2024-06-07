# include <stdio.h>
# include <locale.h>


/*Quest˜ao 4. Fazer um algoritmo que calcule e mostre:
a) A soma entre dois n´umeros
b) O produto entre eles e
c) O quociente entre eles.*/

int main(){

    float a, b, s, q, p;

    printf("Informe o valor 1: ");
    scanf("%f", &a);
    printf("Informe o valor 2: ");
    scanf("%f", &b);

    s = a + b;
    q = a / b;
    p = a * b;

    printf("Sua soma é: %.2f, seu produto é %.2f e seu quociente é: %.2f.", s, q, p);

    return 0;
}