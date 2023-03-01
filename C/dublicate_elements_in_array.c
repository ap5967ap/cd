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
    for (int i = 0; i < n; i++)
    {   
        for (int j = i+1; j < n; j++)
        {
            /* code */
            if (ar[i]==ar[j])
            {
                /* code */
                ar[j]=-1;
            }
            
        }
        
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i]==-1)
        {
            count++;
        }
        
    }
    printf("%d", count);
return 0;
}