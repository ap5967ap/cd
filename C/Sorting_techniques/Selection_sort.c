#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/*
    Initialize minimum value(min_idx) to location 0.
Traverse the array to find the minimum element in the array.
While traversing if any element smaller than min_idx is found then swap both the values.
Then, increment min_idx to point to the next element.
Repeat until the array is sorted.
*/
int position_largest(int ar[], int n){
    int idx=0;
    int mx=0;
    for (int i = 0; i < n; i++)
    {
        if(ar[i]>mx){
            mx=ar[i];
            idx=i;
        }
    }
    return idx;
}
void swap(int ar[], int x, int y){
    int temp=ar[x];
    ar[x]=ar[y];
    ar[y]=temp;
}
void select_sort(int a[], int n){
    int l;
    for (int i = n; i >0; i--)
    {
        l=position_largest(a,i);
        swap(a,i-1,l);
    }
    
}
int main(){
    int ar[] = {2,5,1,2,5,8,1,0};
    select_sort(ar,8);
    for (int i = 0; i < 8; i++)
    {
        printf("%d ",ar[i]);
    }
    
return 0;
}