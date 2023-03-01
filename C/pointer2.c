#include <stdio.h>
#include <math.h>


int main(){
    int a=3265;//00000000-00000000-00001100-11000001
    int *p;
    p=&a;
    char *p0;
    p0=(char *)p;//typecasting 
    printf("%d %p\n",*p0,p0);//-63  {11000001](first one)
    printf("%d %p\n",*(p0+1),p0+1);//(12 second one) [00001100]
return 0;
}