/*
* El numero de argumentos de printf() es indefinido, por lo que se puede 
* trasmitir cuantos datos desee, asi suponiendo que 
* i = 5; j = 12; c = 'A'; n = 40.791512; 
* 
* La sentencia 
*   printf("%d %d %C %f", i,j,c,n); 
* 
* Visualiza en pantall 
*   5   12  A   40.791512
*/

#include <stdio.h>

int main (){
   

    printf("\n%15s", "Hola Connor"); // se ajusta a la derecha 
    printf("\n%-15s", "Hola Connor/n"); // se ajusta a la izquierda

    /* el sigo  - en % indica que el dato se indique de forma predeterminada a la izquierda 
     * en vez de la derecha 
     *  
     * 
     *  \n = hacer la impresion en una nueva linea
     * 
     */

    /* Los codigos de formatos mas utlizados y su significado 
     * %d el dato se convierte a entero decimal
     * %o el dato entero se convierte a   octal
     * %x //  //   //    //   //      //  hexadecimal 
     * %u //  //   //    //   //      //  Entero sin signo 
     * %c se considera de tipo caracter 
     * %e el dato se considera de tipo float. se convierte a notacion cientifica de la forma
     * {-} n.mmmmmmE {+\-}dd
     * %f el dato se considera de tipo float se convierte nacion a decimal con parte entera
     * los siguientes signos de precision
     * %g el dato se considera de tipo float. se convierte segun el codigo %e o %f 
     * dependiendo  de cual sea la representacion mas cort
     * %s el dato ha de ser una cadena de caracteres 
     * %lf se considera de tipo double     
     *
     */

return 0; 
}