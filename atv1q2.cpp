#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int somaAlgarismo(int numero);

int main(){
    int numero;
    
    printf("digite um numero \n");
    scanf("%d", &numero);
    printf("a soma dos algarismo: %d\n", somaAlgarismo(numero));
    
    

return 0;
}

int somaAlgarismo(int numero){
    if(numero == 0) {
        return 0;
    }
    else{
        return (numero % 10) + somaAlgarismo(numero/10); 
        
    }
}
