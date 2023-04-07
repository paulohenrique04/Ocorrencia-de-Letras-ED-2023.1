/*
Implemente um função recursiva que recebe uma frase e uma letra e retorna o números de vezes que essa letra aparece na frase. 

Entrada:

A Andreia alimentou a avestruz com alcaparras
a
Saída:
8
*/

#include <stdio.h>
#include <string.h>

/**
n é o tamanho do texto contido em frase.
**/

int contar_letra(char frase[], int n, char letra, int i){
    if(i > n) {
        return 0;
    } else if(frase[i] == letra) {
        return contar_letra(frase, n, letra, i+1) + 1;
    } else {
        contar_letra(frase, n, letra, i+1);
    }
}


int main(){
    char frase[100];
    scanf("%[^\n]", frase);
    char letra;
    scanf(" %c", &letra);
    int indice = 0;
    
    printf("%d", contar_letra(frase, strlen(frase)-1, letra, indice));
}