#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int  menorNumero(unsigned long int  numero,int  menor);

int main(){
    unsigned long int numero;
    printf("digite um numero de ate 10 digitos\n");
    scanf("%u", &numero);
    printf("o menor digito seria: %u", menorNumero(numero, 9));
    

return 0;
}

int menorNumero(unsigned long int  numero,int menor){
    if(numero == 0){
        return menor;
    }
    else{
        if(numero % 10 < menor){
            menor = numero % 10;
        }
        numero = numero / 10;
        return menorNumero(numero, menor);
    }
}
