/*Os números de Catalan são definidos pela seguinte recursão:

Alguns números desta sequência são:
1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, ...
Faça uma função recursiva que receba*/

#include <stdio.h>
#include <stdlib.h>

int Catalan(int numero);

int main(){
    int numero;
    char entrada[50];

    printf("digite um numero\n");
    fgets(entrada, sizeof(entrada), stdin);
    if(sscanf(entrada, "%d", &numero) != 1 || numero < 0){
        printf("digitou o numero incorreto \n");
        exit(1);
    }
    printf("o numero de Catalan: %d", Catalan(numero));
    return 0;
}
int Catalan(int numero){
    if(numero == 0){
        return 1;
    }else if(numero > 0){
       return (2 * (2 * numero - 1) * Catalan(numero - 1)) / (numero + 1); 
    }
}
