#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int **a;
    int rows, cols;
    scanf("%d", &rows);
    a=(int **)calloc(rows, sizeof(int));
    for (int i = 0; i < rows; i++)
    {
        scanf("%d",&cols);
        a[i] =(int *)calloc(cols, sizeof(int*));
    }
    
return 0;
}