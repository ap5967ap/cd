#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int* arr[5];//array of pointers
    for (int i = 0; i < 5; i++)
    {
        arr[i]=(int*)calloc(3,sizeof(int));
    }
    arr[1][1]=30;
    scanf("%d",&arr[0][2]);
    printf("%d",arr[4][2]);

    int *arr[5];
    arr[0]=calloc(1,sizeof(int));
    arr[1]=calloc(2,sizeof(int));
    arr[2]=calloc(2,sizeof(int));
    arr[3]=calloc(3,sizeof(int));
    arr[4]=calloc(3,sizeof(int));

    int *array[5];
    int numofCols;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&numofCols);
        array[i]=(int*)calloc(numofCols,sizeof(int));
    }
    
return 0;
}
