#include <stdio.h>
#include <math.h>


int main(){
    int a[]={2,4,5,8,1};
    printf("%d\n",a);
    printf("%d\n",&a[0]);
    printf("%d\n",a[0]);
    printf("%d\n",*a);
    printf("%d\n",a+1);
    printf("%d\n",*(a+1));
return 0;
}