#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void swap_rows(int **ptr, int rows, int cols, int x, int y){
    int *temp=ptr[x];
    ptr[x]=ptr[y];
    ptr[y]=temp;
}
void swap_cols(int **ptr, int rows, int cols, int x, int y){
    for (int i = 0; i < rows; i++)
    {
        int t = ptr[i][x];
        ptr[i][x]=ptr[i][y];
        ptr[i][y]=t;
    }
    
}
int main(){
    int **ar;
    int rows=3;
    int cols=4;
    ar=(int **)malloc(sizeof(int)*rows);
    for(int i=0;i<rows;i++){
        ar[i]=malloc(sizeof(int)*cols);
    }
    swap_cols(ar,rows,cols,0,2);
return 0;
}