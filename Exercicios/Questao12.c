# include <stdio.h>
# include <locale.h>

/*
Quest˜ao 12. Fazer um algoritmo que calcule a m´ edia aritm ´ etica dos n´umeros 7, 8 e 9 
e a m´ edia nos n´umeros 4, 5 e 6. Mostre a soma das duas m´ edias e a m´ edia das m´ edias.
*/

int main() {

    int n1 = 7, n2 = 8, n3 = 9, n4 = 4, n5 = 5, n6 = 6;

    float media1 = (n1 + n2 + n3) / 3.0;
    float media2 = (n4 + n5 + n6) / 3.0;
    float somaDasMedias = media1 + media2;
    float mediaDasMedias = somaDasMedias / 2.0;

    printf("Media do primeiro conjunto: %.2f\n", media1);
    printf("Media do segundo conjunto: %.2f\n", media2);
    printf("Soma das duas medias: %.2f\n", somaDasMedias);
    printf("Media das medias: %.2f\n", mediaDasMedias);

    return 0;
}