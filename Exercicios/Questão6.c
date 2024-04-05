# include <stdio.h>
# include <locale.h>

/*
Quest˜ao 6. Fac¸a um algoritmo que recebe o valor do raio de um c´ırculo 
e apresenta o valor da a´ rea desse c´ırculo.
*/
int main(){

    float A, pi = 3.14159, r;
    
    printf("Informe o valor do raio da circunferencia: ");
    scanf("%f", &r);

    A = pi * r * r;
    
    printf("O valor em polegadas da circunferencia é: %.2fin.", A);
    return 0;
}