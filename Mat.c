#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int tam = 5;
    char numeros[tam];//ler numeros
    const char separador[] = "+";
    char * result;
    printf("Informe os números: ");
    scanf("%s", &numeros[tam]);
  
  result = strtok(numeros, result);
    
  int valor;
    while (result != NULL){
            valor = atoi(result);
            result = strtok(NULL, separador);
    }
    for(int j = 1; j < tam; j = j +1){
        int key = numeros[j];
        int i = j-1;
        while(i >= 0 && numeros[i]>key){
            numeros[i+1] = numeros[i];
            i = i -1;
            printf("%d+", result[i+1]);
        }
        result[i+1] = key;
        
    }
}
