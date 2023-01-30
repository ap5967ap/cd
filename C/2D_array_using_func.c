#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int **array_2d(){
    int rows;
    scanf("%d",&rows);
    int **a=(int **)malloc(rows*sizeof(int));
    for(int i=0;i<rows;i++){
        int cols;
        scanf("%d",&cols);
        a[i]=(int *)malloc(cols*sizeof(int));
    }
    return a;
}
int main(){
    int rows, cols;
    scanf("%d", &rows);
    scanf("%d", &cols);
    int **myArray=array_2d();
return 0;
}