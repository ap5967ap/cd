#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void cpy_arr(int *ar,int **p, int size){
    *p=malloc(size);
    memcpy(*p,ar,size);
}
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int *newarr;
    cpy_arr(ar, &newarr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d ",newarr[i]);
    }
    printf("\n");
return 0;
}