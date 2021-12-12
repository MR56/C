/*
 * Mostrar funcionamineto de secuencias de escape 
 * 
 */

#include <stdio.h>

int main(){
    char sonidos = '\a';                                // secuencias de escape alarma en sonidos 
    char bs = '\b';                                     // alamcena secuencia escpae retroceso en bs 

    printf ("%c%C", sonidos, sonidos);                  // emite sonidos dos veces 
    printf("ZZ");                                       // imprime dos caracteres 
    printf ("%c%c", bs, bs);                            // mueve el cursoso al imprimir caracteres 'Z' 


    return 0; 
}