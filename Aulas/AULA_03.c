#include <stdio.h>
#include <locale.h>

/*
int main()
{
  setlocale(LC_ALL, "portuguese");


  int mes;
    
  printf("Por favor, informe o mês que deseja encontrar: ");
  scanf("%d", &mes);
    
      switch(mes)
      {
               
       case 1:
           printf("Janeiro");    
           break;
       
       case 2:
           printf("Fevereiro");    
           break;
           
       case 3:
           printf("Março");
           break;
       
       case 4:
            printf("Abril");
            break;
            
       case 5:
            printf("Maio");
            break;
       
       case 6:
            printf("Junho");
            break;
            
       default:
               printf("Mês informado incorreto, tente novamente !!!");
               
   }
  printf("\n");
  system("PAUSE");

  return 0;
}
*/

int main(){

int valor, i;

printf("Digite um valor inteiro: ");
scanf("%d", &valor);

for (i = 0; i <= 10; i++){

    printf("%d x %d = %d \n", i, valor, valor * i);
}

return 0;
}