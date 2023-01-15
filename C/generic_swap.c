#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>
void generic_swap(void *a, void *b, int size){//swaps values of any data scalar type
    void * tempMemomry = malloc(size);
    // memcpy(destination address, source address, size)
    memcpy(tempMemomry,a,size);
    memcpy(a,b,size);
    memcpy(b,tempMemomry,size);
    free(tempMemomry);
}
int main(){
    int a=4,b=5;
    double d=3.44, e=45.56;
    char x='a', y='b';
    generic_swap(&a,&b,sizeof(a));

    printf("%d %d\n",a,b);
    generic_swap(&d,&e,sizeof(d));
    printf("%lf %lf\n",d,e);
    generic_swap(&x,&y,sizeof(x));
    printf("%c %c\n",x,y);
return 0;
}