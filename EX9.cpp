#include <stdio.h>
#include <math.h>

int main(){
    float f;
    while(0==0){
        printf("Entre com um valor em radianos, escreva 0 para sair\n");
        scanf("%f", &f);
        if (f==0) break;
        printf("O valor de Seno de %f eh %f\n",f,sin(f));
    }
    return 0;
}