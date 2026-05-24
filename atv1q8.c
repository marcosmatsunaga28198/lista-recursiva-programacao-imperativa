/*A função “fatorial duplo” é definida como o produto de todos os
números naturais ímpares de 1 até algum número natural ímpar N.
Assim, o fatorial duplo de 5 é:
5!! = 1 * 3 * 5 = 15
Faça uma função recursiva que receba um número inteiro positivo
ímpar N e retorne o fatorial duplo desse número.*/
#include <stdio.h>
#include <stdlib.h>

int fatorialDuplo(int numero);

int main(){
    char entrada[40];
    int numero;

    printf("digite um numero: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &numero) != 1 || numero < 0 || numero % 2 == 0){
        printf("digitou errado\n");
        exit(1);
    }
    printf("o fatorial duplo e:%d \n", fatorialDuplo(numero));
    return 0;
}

int fatorialDuplo(int numero){
    if(numero==1){
        return 1;
    }else{
        return numero * fatorialDuplo(numero -2);
    }
}




