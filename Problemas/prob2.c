/**
* Elabore un programa en C que permita facturar productos, el mismo debe leer el precio de N productos
* (debe controlarse por respuesta de usuario), el programa debe calcular el total de la venta.
* Existe una promocion que a los productos que tengan un costo entre B/.14.99 y B/.24.99 se les debe hacer un descuento del 8.5%, debe determinar a
* cuantos productos se le aplica el descuento, a cuantos no se le aplica, cuanto es el descuento total
* aplicado a la venta, y cuanto es el total a pagar en la factura. Tome en cuenta que debe implementar el uso de funciones. (40pts)
*/

#include <stdio.h>

void sel_productos(float precio[], int cantidad);

int main(void){

    // bloque de declaraciones
    int producto_total, i, descuento = 0, sin_des = 0;
    float totd = 0, toti = 0, totf = 0;
    // bloque de instruciones
    printf(" cuantos productos vamos a facturar? ");
    scanf("%d", &producto_total);
    float prei[producto_total];
    for (i = 0; i < producto_total; i++)
    {
        printf("\nProducto %d \n", i + 1);
        printf("precio:: ");
        scanf("%f", &prei[i]);
        toti = toti + prei[i];
        if (prei[i] >= 14.99 && prei[i] <= 24.99){
            descuento = descuento + 1;
        }else {
            sin_des = sin_des + 1;
        }

    }
    desProduit(prei, producto_total);
    for (i = 0; i < producto_total; i++)
    {
        totd = totd + prei[i];
    }
    totf = toti - totd;
    printf("\n Total de venta: %.2f", toti);
    printf("\n sin descuento: %.2f", totd);
    printf("\n Total a pagar: %.2f", totf);
    printf("\n");
    printf("\n Produitos con descuento: %d", descuento);
    printf("\n Produitos sin descuento: %d\n", sin_des);
}

void desProduit(float precio[], int cantidad)
{
    int d;
    for (d = 0; d < cantidad; d++)
    {
        if (precio[d] >= 14.99 && precio[d] <= 24.99){

            precio[d] = precio[d] - (precio[d] * 0.085);
        }
        else{

            precio[d] = 0;
        }
    }
}
