#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//returning a dynamically allocated array using functions
//we can't return a static array as life of function is life of array
int *array(){
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",arr+i);
    }
    return arr;
   

}
//CALLOC
/*
“calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. 
it is very much similar to malloc() but has two different points and these are:
It initializes each block with a default value ‘0’.
It has two parameters or arguments as compare to malloc().*/
//if space is insufficient, allocation fails and returns a NULL pointer.
int print_array(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
//free
/*
1. NEVER Free a statically created array (Actually all non - HEAP objects )
2. NEVER free an array twice
3. We can't free some elements of an array
*/
int main(){
    // int *ar = array();
    int array_size=5;
    int *a=calloc(array_size,sizeof(int));
    int ar[10]={0};
    // free(ar);
    // free(ar);
    // free(a);
    //realloc -> to add blocks to existing one
    a=(int *)realloc(a,7*sizeof(int));
    scanf("%d%d",&a[5],&a[6]);
    print_array(a,7);
return 0;
}