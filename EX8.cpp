#include <stdio.h> 

float TCTF(float TC){
    return ((TC*9/5)+32);
}

int main(){
    float i=0;
    for(i=10;i!=110;i=i+10){
        printf("\n %f C = %f F",i,TCTF(i));
    }
    return 0;
}