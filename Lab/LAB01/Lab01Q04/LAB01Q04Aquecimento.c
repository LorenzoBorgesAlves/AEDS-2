#include <stdio.h>
#include <stdlib.h>

#define bool int
#define true 1
#define false 0



int tamanhoStr(char *s){
	int i = 0;
    while(s[i] != '\0'){
	    i++;	
	} return i;
}

bool ehFIM(char *s){
	return (tamanhoStr(s) == 3 && s[0] == 'F' && s[1] == 'I' && s[2] == 'M');
}

int contMaiusculaRecursivo(char *s, int i, int count){

	if(s[i] == '\0'){
		return 	count;
	} else if(s[i] >= 'A' && s[i] <= 'Z'){
		return contMaiusculaRecursivo(s, i + 1, count + 1);
	  } return contMaiusculaRecursivo(s, i + 1, count);
}	
	

int main(){

	char s[100];
	scanf("%s", s);
	while(ehFIM(s) == false){
		printf("%d\n", contMaiusculaRecursivo(s, 0, 0));
		scanf("%s", s);
	}

	return 0;
}
