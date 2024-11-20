/*Sofía Paulina López González 
matrices, practica 10*/

#include <stdio.h>

int main()
{
    int arr1[3][3], arr2[3][3], res[3][3];
    int val1, val2, val3 ,i, j;

    printf("Pedir valores Matriz 1\n");
    for(i=0; i<3; i++)
    {
        printf("Dar los valores del renglos separados por una coma(,)\n");
        scanf("%d,%d,%d", &val1, &val2, &val3);
        arr1[i][0] = val1;
        arr1[i][1] = val2;
        arr1[i][2] = val3;
    }

    printf("Pedir valores Matriz 2\n");
    for(i=0; i<3; i++)
    {
        printf("Dar los valores del renglos separados por una coma(,)\n");
        scanf("%d,%d,%d", &val1, &val2, &val3);
        arr1[i][0] = val1;
        arr1[i][1] = val2;
        arr1[i][2] = val3;
    }

    //suma de matrices
    for(i=0; i<3; i++)
    {
      for(j=0; j<3; j++)
      {
        res[i][j] = arr1[i][j];
      }
    }
  
    printf("\n");
    printf("Imprimir matriz\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d | ", res[i][j]);
        }
        printf("\n");
    }
  return 0;
}
