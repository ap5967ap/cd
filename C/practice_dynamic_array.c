// make a dynamic array
// size unknown
// take input till we recieve -1
// use functions and return size of array 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int arr(){
    int *ar=malloc(1*sizeof(int));
    int n,i=0;
    int *ar2;
    while (n!=-1)
    {   
        scanf("%d",&n);
        ar2=realloc(ar,(i+1)*sizeof(int));
        ar2[i]=n;
        i=i+1;
        ar=ar2;
    }
    for (int j = 0; j < i; j++)
    {
        printf("%d ",ar2[i]);
    }
    
}
int main(){
    arr();
    
return 0;
}