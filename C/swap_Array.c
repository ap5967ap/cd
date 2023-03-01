#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void swaparray(int **p1, int **p2) {
    void *temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){
    int ar[]={1,2,3,4,5};
    int br[]={44,45,46};
    int *arr=(int *)malloc(sizeof(int)*4);
    int *brr=(int *)malloc(sizeof(int)*5);
    swaparray(&arr, &brr);//gives warning as array is static array
    for (int i = 0; i < 4; i++)
    {
        arr[i] =i+1;
    }
    for (int i = 0; i < 5; i++)
    {
        brr[i] = (i+44);
    }
    
    //to avoid it use dynamic array
    for(int i=0;i<5;i++){
        printf("%d ",brr[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ",arr[i]);
    }
    
return 0;
}