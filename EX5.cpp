#include<stdio.h>
int global = 10;

int main(){
    int i1=20, i2=30, i3=40, i4=50, i5=60;
    char c='c',o='o',e='e',l='l',h='h',a='a';

    printf("O valor das variaveis inteiras e: %d %d %d %d %d %d",global,i1,i2,i3,i4,i5);
    printf("\nO animal contido nas variaveis caracters e a %c%c%c%c%c%c",c,o,e,l,h,a);

    return 0;
}