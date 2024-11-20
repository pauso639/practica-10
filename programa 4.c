/*Sofía Paulina López González 
matrices, practica 10*/

#include <stdio.h>

int main()
{
    int arr[3][3];
    int val1, val2, val3 ,i, j;

    printf("Pedir valores\n");
    for(i=0; i<3; i++)
    {
        printf("Dar los valores del renglos separados por una coma(,)\n");
        scanf("%d,%d,%d", &val1, &val2, &val3);
        arr[i][0] = val1;
        arr[i][1] = val2;
        arr[i][2] = val3;
    }

    printf("\n\n");
    printf("Imprimir matriz\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d | ", arr[i][j]);
        }
        printf("\n");
    }
  return 0;
}
