/*López González Sofía Paulina 
matrices, practica 10*/
#include <stdio.h>

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i = 0, j = 0;
   
    printf("Imprimir matriz\n");
    
    do
    {
        do
        {
            printf("%d | ", arr[i][j]);
            j++;
        }
        while(j < 3);
        printf("\n");
        j = 0;
        i++;
    }
    while(i < 3);
    return 0;
}
