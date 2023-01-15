#include <stdio.h>
#include <math.h>


int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int *ptr;
    ptr=ar;
    for (int i = 0; i < n; i++)
    {
        printf("%p ",ptr+i);
    }
    
return 0;
}