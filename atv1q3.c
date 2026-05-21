#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void fibonaci(int numero, int conta, int termo1, int termo2);
int main(){
    int numero;
    int conta = 0;
    printf(" digite um numero \n");
    scanf("%d", &numero);
    fibonaci(numero,conta,conta,conta);
    

return 0;
}

void fibonaci(int numero, int conta,int termo1, int termo2){
     if( numero == conta){
         
         return 0;
     }else if(conta == 0){
     
         printf("%d ", conta);
         return fibonaci(numero , conta + 1, termo1, termo2);
     }else if (conta == 1){
         printf("%d ", conta);
         return fibonaci(numero, conta + 1, termo1 = 1, termo2 );
     }else if (conta == 2){
         printf("1 ");
         return fibonaci(numero, conta + 1, termo1, termo2 = 1 );
     }else{
         printf("%d ", termo1 + termo2);
         int  aux;
         aux = termo1 + termo2;
         termo1 = termo2;
         termo2 = aux;
         return fibonaci(numero, conta + 1, termo1,termo2);
         
     }
}


