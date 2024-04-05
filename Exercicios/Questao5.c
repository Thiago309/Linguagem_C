# include <stdio.h>
# include <locale.h>

/*Quest˜ao 5. Fazer um algoritmo que converta cent´ımetros
 para polegadas (obs.: 1pol = 2.54cm).*/

int main(){
    
    float cm, resul, pol = 0.39;
   
    printf("Informe o valor em centimetros que você deseja converter para polegada: ");
    scanf("%f", &cm);

    resul = cm * pol;

    printf("Seu valor em pol é: %.2fin.", resul);
    return 0;
}