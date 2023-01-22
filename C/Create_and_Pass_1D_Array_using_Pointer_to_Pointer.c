#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void array(int n, int **p){
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    *p=arr;
}
void array2(int n, int **p){
    *p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&(*p)[i]);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int *ptr;
    array2(n, &ptr);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
return 0;
}