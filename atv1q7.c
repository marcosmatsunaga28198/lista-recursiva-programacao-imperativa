/*Escreva uma função recursiva que recebe inteiros não negativos
m e n , e calcula a função de Akermann definida abaixo: */

#include <stdio.h>
#include <stdlib.h>

int funcaoDeAkermann(int m, int n);
void entrada(int *x);

int main(){
    int m , n;
    
    printf("digite o valor de m: ");
    entrada(&m);
    
    printf("digite o valor de n: ");
    entrada(&n);

    printf("%d", funcaoDeAkermann(m,n));
    return 0;
}

void entrada(int *x){
    char texto[50];
    int n;
    fgets(texto, sizeof(texto), stdin);
    if(sscanf(texto, "%d", &n) != 1 || n < 0){
        printf("digitou um numero errado\n");
        exit(1);
    }
    *x = n;
}


int funcaoDeAkermann(int m, int n){

    if(m == 0){
        return n + 1;
    }else if(m > 0 && n ==0){
        return funcaoDeAkermann(m -1, 1);
    }else if(m> 0 && n > 0){
        return funcaoDeAkermann(m-1, funcaoDeAkermann(m, n-1));
    }

}
