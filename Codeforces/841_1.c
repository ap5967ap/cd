#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
    long int n;
    scanf("%d",&n);
    long int ar[n];
    for (long int i = 0; i < n; i++)
    {
        scanf("%ld",&ar[i]);
    }
    long int p=1;
    for (long int i = 0; i < n; i++)
    {
        p=p*ar[i];
    }
    p=p+n-1;
    printf("%ld\n",p);
    }
    return 0;
}