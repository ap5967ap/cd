#include <stdio.h>
#include <math.h>


int main(){
    char s[6];
    fgets(s,sizeof(s), stdin);//to input a string
    char *ptr;
    ptr=s;
    int c=0, v=0;
    while(*ptr!='\0')
    {
        if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'){
            v++;
        }
        else{
            c++;
        }
        ptr++;
    }
    printf("%d %d",c,v);
return 0;
}