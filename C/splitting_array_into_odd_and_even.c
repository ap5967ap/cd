// Splitting “source array” into ODD and EVEN arrays
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//to point to an array using int ** ptr;
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int nodd=0, neven=0;
    for(int i=0;i<n;i++){
        (ar[i]%2!=0)?(++nodd):(++neven);
    }
    int *odd=(int *)malloc(nodd*sizeof(int));
    int j=0;
    int *even=(int *)malloc(neven*sizeof(int));
    for(int i=0;i<n;i++){
        if(ar[i]%2!=0){
            odd[j]=ar[i];
            ++j;
    }
    }
    j=0;
    for(int i=0;i<n;i++){
        if(ar[i]%2==0){
            even[j]=ar[i];
            ++j;
    }
    }
    for (int i = 0; i < nodd; i++)
    {   
        printf("%d ",odd[i]);
    }
    printf("\n");
    for (int i = 0; i < neven; i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
return 0;
}