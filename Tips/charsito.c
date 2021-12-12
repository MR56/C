/*
*   el tipo de datos char es detectado como ASCII, es decir que son numeros
*   Para el compilador de C 
*/

#include <stdio.h>

int main (){

    char letra = 'c';
    
    printf("\nLa letra es %c", letra); 
    printf("\nLa letra es %c", letra -32); 
    /*
     *  Internamente los carateres se almacenan como numeros
     *  restando -32 se puede imprimir la letra mayuscula 
     *    
    */
   
    return 0; 
}