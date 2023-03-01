#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void swap_rows(int **ptr, int rows, int cols, int x, int y){
    int *temp=ptr[x];
    ptr[x]=ptr[y];
    ptr[y]=temp;
}
int main(){
    int **ar;
    int rows=3;
    int cols=4;
    ar=(int **)malloc(sizeof(int*)*rows);
    for(int i=0;i<rows;i++){
        ar[i]=malloc(sizeof(int)*cols);
    }
    swap_rows(ar,rows,cols,0,2);
return 0;
}