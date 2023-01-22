#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void sort(int *ar,int n){
    for (int i = 0; i < n; i++)
    {
        for (int j =i+1; j < n; j++)
        {
            if(ar[i]>ar[j]){
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
        
    }
    
}
int count_distinct(int *ar,int n){
    int count=1;
    for (int i = 0; i < n-1; i++)
    {
        if(ar[i]!=ar[i+1]){
            count++;
        }
    }
    return count; 
}
//given a sorted array of integers
//create a new dynamic array without duplicates
int main(){
    int arr[]={1,2,4,2,1,5,1,1,2,3,3,3,3,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int j=0;
    int *p=(int *)malloc(count_distinct(arr,n)*sizeof(int));
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]!=arr[i+1]){
            p[j]=arr[i];
            j++;
        }
    }
    if(arr[n-1]!=arr[n-2])
    {
        p[j]=arr[n-1];
    }
    for (int i = 0; i <= j; i++)
    {
        printf("%d ",p[i]);
    }
    
    
    
return 0;
}