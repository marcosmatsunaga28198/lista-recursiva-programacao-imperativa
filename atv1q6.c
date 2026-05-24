/*Escreva uma função recursiva que efetue a multiplicação de
dois números naturais, através de somas sucessivas (Ex.: 6 *
4 = 4 + 4 + 4 + 4 + 4 + 4).*/
#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int multiplicando, int multiplicador);

int main(){
    int multiplicando;
    int multiplicador;
    char entrada[39];

    printf("digite um multiplicando _ x _");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &multiplicando) != 1 || multiplicando < 0){
        printf("digitou errado \n");
        exit(1);
    }

    printf("digite um multiplicador %d X _", multiplicando);
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &multiplicador) != 1 || multiplicador < 0){
        printf("digitou errado\n");
    }
    
    printf("%d X %d = %d\n", multiplicando, multiplicador, multiplicacao(multiplicando, multiplicador));
    return 0;
}

int multiplicacao(int multiplicando, int multiplicador){

    if(multiplicador == 0 || multiplicando == 0){
        return 0;
    }

    if(multiplicador == 1){
        return multiplicando;
    }

    return multiplicando + multiplicacao(multiplicando, --multiplicador);
}
