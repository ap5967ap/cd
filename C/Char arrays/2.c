#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
    char *ar="HELLO";
    printf("%c",*ar++);
    printf("\n");
    printf("%s",ar);//ELLO as ar is no pointing to address +1
return 0;
}