#include <stdio.h>

int main (void){

   int tam, suma=0, cont1, cont2, cont3=0, cont4=0;

   printf("Escriba el tamanio de la matriz (Filas y columas):   ");
   scanf("%d", &tam);

     int matriz[tam][tam], cont7=(tam-1);

//Aqui se llena la matriz

     for(cont1=0;cont1<tam;cont1++){
         for(cont2=0;cont2<tam;cont2++){
             printf("Escribe el valor de la matriz en la posicion (%d, %d):    ",cont1+1, cont2+1);
             scanf("%d", &matriz[cont1][cont2]);
         }
     }

     int vector1[tam], vector2[tam], diagonal1, diagonal2;

//Aqui se suman cada una de las filas y cada valor se guarda en un vector

     for(cont1=0; cont1<tam;cont1++){
        for(cont2=0;cont2<tam;cont2++){
           suma=suma+matriz[cont1][cont2];
            }
            vector1[cont3]=suma;
            cont3++;
            suma=0;
     }

//Aqui se suman cada una de las columnas y cada valor se guarda en un vector

     for(cont1=0; cont1<tam;cont1++){
        for(cont2=0;cont2<tam;cont2++){
           suma=suma+matriz[cont2][cont1];
            }
            vector2[cont4]=suma;
            cont4++;
            suma=0;
     }


//Aqui se sumara la diagonal principal

       for(cont1=0; cont1<tam;cont1++){

             suma=suma+matriz[cont1][cont1];

       }
       diagonal1=suma;


       suma=0;

//Aqui se sumara la diagonal secundaria

     for(cont1=0; cont1<tam;cont1++){

           suma=suma+matriz[cont1][cont7];

            cont7--;
     }

     diagonal2=suma;

//Finalmente se muestran todos los datos

     printf("\n\n\t\t\t\t\t Matriz:");

     printf("\n");


     for(cont1=0;cont1<tam;cont1++){
          printf("\n\t\t\t\t");
            for(cont2=0;cont2<tam;cont2++){
              printf("  %6d  ",matriz[cont1][cont2]);
        }
     }
           printf("\n\n\t\t\t Sumatoria de cada una de las filas");
             printf("\n\t\t\t\t");
             for(cont1=0;cont1<tam;cont1++){
               printf("  %6d  ", vector1[cont1]);
             }
          printf("\n\n\t\t\t Sumatoria de cada una de las columnas");
            printf("\n\t\t\t\t");
          for(cont1=0;cont1<tam;cont1++){
            printf("  %6d  ", vector2[cont1]);
          }
          printf("\n\n\t\t\t Sumatoria de la diagonal principal");
            printf("\n\t\t\t\t\t");

              printf(" %6d ", diagonal1);

          printf("\n\n\t\t\t Sumatoria de la diagonal secundaria");
              printf("\n\t\t\t\t\t");

                printf(" %6d ", diagonal2);


     printf("\n");

     return 0;

}
