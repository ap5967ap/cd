#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
    char *ar="HELLO";
    printf("%c\n",*ar++); 
    printf("%s\n",ar++);
    printf("%s",ar);//ELLO as ar is no pointing to address +1
return 0;
}