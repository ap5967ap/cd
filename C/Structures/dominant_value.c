#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
// dominant value - value whose occurrence is more than half the size of the array
int dominant_value(int *arr,int n){
    int *hash=(int *)calloc(1+n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[i]>n/2)
        {
            return i;
        }
        
    }
    return -1;
}
int main(){
    int arr[5]={1,2,1,1,2};
    printf("%d\n",dominant_value(arr,5));
return 0;
}