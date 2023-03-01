#include <stdio.h>
#include <math.h>

void pa(int n){
    if (n<=0)
    {
        printf("%d\n",n);
        return;
    }
    printf("%d\n",n);
    pa(n-5);
    printf("%d\n",n);
    return;
}
int main(){
    pa(16);
return 0;
}