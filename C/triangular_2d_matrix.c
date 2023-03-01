#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int ** lower_triangle(){
    int rows;
    scanf("%d", &rows);
    int **a = (int **)malloc(rows*sizeof(int *));
    for(int i=0;i<rows;i++){
        a[i]=malloc((i+1)*sizeof(int));
    }
    return a;
}
int main(){
    int **arr=lower_triangle();
return 0;
}