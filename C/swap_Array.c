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
    swaparray(&ar, &br);//gives warning as array is static array
    //to avoid it use dynamic array
    for(int i=0;i<5;i++){
        printf("%d ",br[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",ar[i]);
    }
    
return 0;
}