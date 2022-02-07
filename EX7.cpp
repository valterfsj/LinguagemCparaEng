#include <stdio.h> 
int main(){
    printf("Primeira afirmacao eh %d, sendo 1 = true, 0 = false",((10>5)||(5>10)));
    printf("\nSegunda afirmacao eh %d, sendo 1 = true, 0 = false",(!(5==6)&&(5!=6)&&((2>1)||(5<=4))));
    return 0;
}