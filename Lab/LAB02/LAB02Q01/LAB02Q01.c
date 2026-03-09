#include <stdio.h>

void COMBINADOR(char *s1, char *s2){
    char combinada[200];
    
    int i = 0; //s1
    int j = 0; //s2
    int k = 0; //combinada

    while(s1[i] != '\0' && s2[j] != '\0'){
            combinada[k] = s1[i]; k++; i++; 
            combinada[k] = s2[j]; k++; j++;        
    } 
    
    if(s1[i] == '\0'){
        while(s2[j] != '\0'){
            combinada[k] = s2[j]; k++; j++;                    
        }   
    }

    if(s2[j] == '\0'){
        while(s1[i] != '\0'){
            combinada[k] = s1[i]; k++; i++;                    
        }   
    }

    combinada[k] = '\0'; 
    printf("%s\n", combinada);
}
        
int main(){
    
    char str1[100];
    char str2[100];
    while (scanf("%s %s", str1, str2) == 2){
        COMBINADOR(str1, str2);
    }
    return 0;
}
