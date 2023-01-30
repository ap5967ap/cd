#include <stdio.h>
#include <math.h>
#include <stdlib.h>

char*read_only(){
    char *str="HELLO";
    return str;//ok as retuning from read_only
}
char *stack(){
    char str[]="HELLO";
    return str;//WARNING as return value from stack
}
int main(){
    char *s1=read_only();
    char *s2=read_only();
    printf("%s\n",s1);
    printf("%s\n",s2);
return 0;
}