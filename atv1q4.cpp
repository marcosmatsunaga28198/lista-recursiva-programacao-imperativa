#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int  maiorNumero(unsigned long int  numero,int  maior);

int main(){
    unsigned long int numero;
    printf("digite um numero de ate 10 digitos\n");
    scanf("%u", &numero);
    printf("o mior digito seria: %u", maiorNumero(numero, 0));
    

return 0;
}

int maiorNumero(unsigned long int  numero,int maior){
    if(numero == 0){
        return maior;
    }
    else{
        if(numero % 10 > maior){
            maior = numero % 10;
        }
        numero = numero / 10;
        return maiorNumero(numero, maior);
    }
}
