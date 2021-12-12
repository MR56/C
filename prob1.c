/**
 * Elabore un programa en C que permita almacenar en arreglos la estatura y el genero de 20 personas,
 * luego de almacenar toda la informacian el programa debe calcular la altura promedio, debe determinar cual es
 * la estatura mas baja y el sexo de la persona, la estatura mas alta y el sexo, y tambien debe contabilizar cuantas personas
 * miden mas de 1.8m (enos), cuantos miden entre 1.5 m y 1.8m (media) y cuantos miden por debajo de 1.5m (pequeños).
 * Debe presentar la informacion solicitada.
 *
**/

#include <stdio.h>
#define  CAN 20

void main(){

    // bloque de declaracion
    float pers[CAN],peque,eno=0,prom,sum=0;
    char gen[CAN],gpeque,geno;

    // varaibles de cantidad de personas altas, medias y bajos. 
    int i,cenos=0,cmedio=0,cbajos=0;

    // bloque de instruciones 
    for(i=0;i<CAN;i++){


        printf("Ingrese los el genero 'F' para Femenido y 'M' para masculino:: ");
        scanf("%c",&gen[i]);
        printf("Ingresar la altura de del suejeto (En metros):: ");       
        scanf("%f",&pers[i]);

        ///Sumar 
        sum=sum+pers[i];
    
        /// mas eno 
        if (pers[i]>=eno){
            eno=pers[i];
            geno=gen[i];
        }
    }
    ///Calculo del mas peque
    peque=eno;
    for(i=0;i<CAN;i++){
        if(pers[i]<=peque){
            peque=pers[i];
            gpeque=gen[i];
        }
    }
    ///Registro de cantidad alturas alta,media y baja

    for(i=0;i<CAN;i++){
        if (pers[i]>1.8){
            cenos=cenos+1;
        } else if(pers[i]<=1.80 &&pers[i]>=1.50) {
            cmedio=cmedio+1;
        } else if (pers[i]<1.50){
            cbajos=cbajos+1;
        }
            
    }
    ///promedio
    prom=sum/CAN;

    ///Impresion de resultados

    printf("altura promedio: %.2f\n",prom);
    printf("La persona mas baja es de genero: %c, y el individuo: %.2f\n",gpeque,peque);
    printf("La persona mas alta es de genero: %c, y de individuo: %.2f\n",geno,eno);
    printf("\n" "\\");

    printf("Cantidad de indiduos enos son  alta: %d\n",cenos);
    printf("Cantidad de individuos de altura media: %d\n",cmedio);
    printf("Cantidad de idividios de altura baja: %d\n",cbajos);
}


