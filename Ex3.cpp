#include <stdio.h>
#include<conio.h>

void Ex3_A(){
    char x;
    printf("Escreva uma letra\n");
    scanf("%c",&x);
    printf("Char: %c , ASCII: %d",x,x);
    getch();
}

void Ex3_B(){
    char a[99],b[99];
    fflush(stdin);
    printf("\nEscreva uma string\n");
    gets(a);
    printf("\nEscreva uma segunda string\n");
    gets(b);
    printf("\n Primeira String: %s \n Segunda letra da primeira string %c \n Segunda String %s \n Segunda letra da segunda string %c \n ",a,a[1],b,b[1]);
}

int main(){
    Ex3_A();
    Ex3_B();
    return(0);
}

