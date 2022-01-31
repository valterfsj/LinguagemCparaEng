#include <stdio.h>

void Ex4_B(){
    int i;
    for (i=100; i!=0;--i){
        printf("%d\n",i);
    }
}

void Ex4_C(){
    char a[99];
    int i,aux=0;
    fflush(stdin);
    printf("\nEscreva uma string\n");
    gets(a);
    for(i=0;i<100;i++){
        if(char(a[i])==97){
            a[i]=98;
            aux++;
            }
    }
    printf("\nString modificada\n %s\n Foram substituidas %d letras A por letras B ",a,aux);
}

int main(){
    Ex4_B();
    Ex4_C();
    return(0);
}

