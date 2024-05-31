#include <stdio.h>
#include <stdlib.h>

#define nome valor; // O comando define, define uma variavel constante.
#define PI 3.15;

const float PI1 = 3.14; // const tipo nome = valor;
const char nome1[4] = {"natalia", "pietra","alexandra","maria", "fernanda"};
char nome[4] = {1};  //Esse é o menor vetor pois: 4 * 1bit = 4 bits. Os valores dentro dos vetores são contantes. [4]
int valor[4];  //Esse é o maior vetor pois: 4* 4bits = 16 bits
float nota[] = {5.2, 7.8, 9.7};  // tamanho ilimitado.
float nota[3] = {5.2, 7.8, 9.7}; // tamanho com 4 vetores.

// ou

float nota[3];
nota[0] = 4.4;
nota[1] = 7.8;
nota[2] = 9.7;

char texto[7] = "jonatas";



int main(){

    fgets(nome_da_variavel, tamanho, stdin);

    char condicao = A;

    switch (expression)
    {
    case 'A':
    case 'a':

        printf("aprovado");
        break;
    
    case 'R':
    case 'r':
        printf("reprovado");
        break;

    default:
        break;
    }
    return 0;
}