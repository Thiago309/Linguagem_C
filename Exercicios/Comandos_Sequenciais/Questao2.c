# include <stdio.h>
# include <locale.h>

/*Quest˜ao 2. Fazer um algoritmo que leia um n´umero e 
mostre o seu antecessor e o seu sucessor.*/
int main(){

    int a, ante, suce;

    printf("Informe o valor 1: ");
    scanf("%d", &a);

    ante = a - 1;
    suce = a + 1;

    printf("O antecessor deste numero é %d e o seu sucessor é %d.", ante, suce);

    return 0;
}