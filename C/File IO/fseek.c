#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    char str[100];
    FILE *ptr = fopen("file.txt","w+");
    fputs("Welcome Ap to Pc", ptr);
    fseek(ptr,0,SEEK_END);
    fputs("XX",ptr);
return 0;
}