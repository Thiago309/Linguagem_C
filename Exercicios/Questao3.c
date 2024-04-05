# include <stdio.h>
# include <locale.h>

/*Quest˜ao 3. Fazer um algoritmo que obtenha dois n´umeros inteiros, x e y, mostre
 o quociente e o resto da divis˜ao inteira entre eles.
*/
int main(){

    int x, y, q;
    int r;

    printf("Informe o valor de X: ");
    scanf("%d", &x);
    printf("Informe o valor de Y: ");
    scanf("%d", &y);

    q = x / y;
    r = x % y;

    printf("O cociente da divisão é: %d e o seu resto é: %d .", q, r);

    return 0;
}