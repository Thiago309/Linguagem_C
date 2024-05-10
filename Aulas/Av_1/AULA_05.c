#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
int main()
{
    int n, m;
    
    for(n=1; n<11; n++){
        printf("\n Tabuada de %d: \n", n);
        for(m=1; m<11; m++){
            printf("%d x %d = %d \n", n, m, n*m);
            
        }
    }
    
    return 0;
}
*/

void main(){

    setlocale(LC_ALL, "portuguese");
    char opcao;
    int escolha, simula;
    
    while(opcao == "N" || opcao == "n"){

        printf("\n1.Imprima FICR.\n2.Imprima FACULDADE. \n3. Sair.\nInforme sua escola: ");
        scanf("%d", &escolha);

        switch (escolha){
            case 1:
                printf("\nFICR\n");
                break;
            
            case 2:
                printf("\nFACULDADE\n");
                break;

            case 3:
                exit(0);
                break;
                
            default:
                printf("\nPor favor, escola uma opção válida.\n");
                break;
            }
        
        printf("Deseja sair? ");
        scanf("%d", &simula);
        scanf("%c", &opcao);  
    }
    
    return 0;
}