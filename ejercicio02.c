#include <stdio.h>

int main(void){

    int af, ac, i, j;

    printf("Numero de renglones de la matriz  A:   ");
    scanf("%d", &af);
    printf("Numero de columnas de la matriz  A:    ");
    scanf("%d", &ac);
    int A[af][ac], B[ac][af];
    for(i=0;i<af;i++){
        for(j=0;j<ac;j++){
            printf("Escribe el valor de la matriz 1 (%d, %d)    ",i+1, j+1);
            scanf("%d", &A[i][j]);
            B[j][i]=A[i][j];
        }
    }

    printf("\n\n\t\t\t Matriz A");

    for(i=0;i<af;i++){
         printf("\n\t\t");
           for(j=0;j<ac;j++){
             printf("  %6d  ",A[i][j]);
       }
    }

    printf("\n\n\t\t\t Matriz B");

    for(i=0;i<ac;i++){
         printf("\n\t\t");
           for(j=0;j<af;j++){
             printf("  %6d  ",B[i][j]);
       }
    }

         printf("\n");


return 0;
}
