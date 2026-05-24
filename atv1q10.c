#include <stdio.h>
#include <stdlib.h>

int pell(int numero);

int main(){
    int numero;
    char entrada[50];

    printf("digite um numero: ");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &numero) != 1 || numero < 0){
        printf("nao digitou um numero\n");
        exit(1);
    }
    
    printf("pell = %d \n", pell(numero));
    return 0;
}


int pell(int numero){
    if(numero == 0 ){
        return 0;
    }else if(numero == 1){
        return 1;
    }else if(numero > 2){
        return 2 * pell(numero -1) + pell(numero -2);
    }
}
