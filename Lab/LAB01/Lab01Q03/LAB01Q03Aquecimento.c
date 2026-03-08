#include <stdio.h>
#include <stdlib.h>

#define bool int
#define true 1
#define false 0

int stringLen(char *c){
	int i = 0;
	int contador = 0;
	while(c[i] != '\0'){
		contador++; i++;
       }
	return contador;
}

int contaMaiuscula(char *x){
	int contador = 0;
	for(int i = 0; i < stringLen(x); i++){ 
		if(x[i] >= 'A' && x[i] <= 'Z'){
			contador++;
		}
	} return contador;
}

bool ehFIM(char *c){
	return (stringLen(c) == 3 && c[0] == 'F' && c[1] == 'I' && c[2] == 'M');
}


int main(){
	
	char s[100];
	scanf("%s", s);
	
	while(ehFIM(s) == false){
		printf("%d\n", contaMaiuscula(s));
		scanf("%s", s);
	}			
	return 0;
}
