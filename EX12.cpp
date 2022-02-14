#include <stdio.h>
#include <string.h>

void inverte(char* string)
{
	int len = strlen(string)-1;
	int mid = len / 2;
	int pos=0;
	char tmp;
	while(pos<mid){
 		tmp = string[pos];
		string[pos]	= string[len-pos];
		string[len-pos] = tmp;
        pos++;
	}		
}

int main(){
	char string[256];
    printf("Entre com uma string de tamanho maximo 255 \n");
	fgets(string, 256, stdin);
	string[strlen(string)-1]='\0';
	printf("Normal: %s\n", string);
	inverte(string);
	printf("Invertido: %s\n", string);
	inverte(string);
	return 0;
}