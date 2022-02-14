#include <stdio.h>

int main(){
    int i;

    printf("Entre com um numero inteiro correspondente a um dia da semana (1-7) \n");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("Domingo");
        break;
     case 2:
        printf("Segunda");
        break;
    case 3:
        printf("Terça");
        break;
     case 4:
        printf("Quarta");
        break;           
    case 5:
        printf("Quinta");
        break;
     case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sabado");
        break;    
    default:
        printf("Entrada Incorreta");
        break;
    }

}