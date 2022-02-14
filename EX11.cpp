#include <stdio.h>
#include <string.h>

void inverte(char* string)
{
	int len = strlen(string)-1;
	int mid = len / 2;
	int pos;
	char tmp;
	for(pos=0; pos<mid; pos++){
 		tmp = string[pos];
		string[pos]	= string[len-pos];
		string[len-pos] = tmp;
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