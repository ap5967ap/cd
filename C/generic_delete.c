#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int * generic_remove(int *ar, int n, int idx, int size, int  delsize){
    void *newarr=malloc(size-delsize);
    memcpy(newarr,ar,idx);
    memcpy((char *)newarr+idx,(char *)ar+idx+delsize,size-idx-delsize);//added (char *) as we can't add pointers like that 
    return newarr;
}
int main(){
    int arr[]={1,2,4,45,6};
    int *newarray=generic_remove(arr,5,2*sizeof(int),5*sizeof(int),sizeof(int));
    for (int i = 0; i <4; i++)
    {
        printf("%d ",newarray[i]);
    }
    
return 0;
}