#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void *myrealloc(void *srcblock,unsigned old, unsigned new){
    int i;
    char *resultArr=(char *)malloc(new);
    for (int i = 0; i < old; i++)
    {
        resultArr[i]=((char *)srcblock)[i];
    }
    free(srcblock);
    return resultArr;
}

int main(){
    int *numbers=(int *)malloc(12);
    int *temp=NULL;
    numbers[0]=3;
    numbers[1]=4;
    numbers[2]=5;
    temp=(int *)myrealloc(numbers, 3*4,5*4);
    //https://pythontutor.com/visualize.html#mode=display see this webpage
return 0;
}