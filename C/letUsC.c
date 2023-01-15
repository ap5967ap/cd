#ifndef __LETUSC_H__
#define __LETUSC_H__

// #include <stdio.h>
// #include <math.h>

// void factors (int number,int factor)
// {
//     if (number<2)
//         return;
//     if (number%factor == 0)
//     {
//         factors (number/factor,factor);
//         printf("%d ",factor);
//     }
//     else
//         factors (number,factor+1);
// }
// int dtb(int n){//decimal to binary
//     if (n==0)
//     {
//         return 0;
//     }
//     return (n%2+10*dtb(n/2));
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",dtb(n));
// return 0;
// }
#include <stdio.h>
#include <math.h>

void factors(int n, int i,int num){
    if (num==i )
    {
        return ;
    }
    if (n%i==0)
    {
        factors(n/i,i,num);
        printf("%d",i);

    }
    else{
        factors(n,i+1,num);
    }
}
int dtb(int n){
    if (n==0)
    {
        return 0;
    }
    else{
        return (n%2+10*dtb(n/2));
    }
}
int main(){
    factors(56,2,56);
    printf("\n%d",dtb(16));
return 0;
}
#endif // __LETUSC_H__