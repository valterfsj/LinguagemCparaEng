#include<stdio.h>
    int main(){
        int x,y,z;
        x=y=10;
        z=++x;
        x=-x;
        y++;
        x=x+y-(z--);
        printf("O valor de x e %d de y %d e de z %d",x,y,z);
        return 0;
}