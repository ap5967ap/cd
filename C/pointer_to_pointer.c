#include <stdio.h>
#include <math.h>


int main(){
    int x=5;
    int *p=&x;
    *p=6;//x=6
    int **q=&p;
    int ***r=&q;
    ***r=10;
    printf("%d\n",x);
    **q=*p+2;//valid
    printf("%d",x);
return 0;
}
