#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    char a[]={"i am ap"};
    char *b=malloc(10);
    for (int i = 0; i < 10; i++)
    {
        *(b+i)=a[i];
    }
    printf("%s",b);

return 0;
}