#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    // char *x[100];
    // for (int i = 0; i < 100; i++)
    // {
    //     x[i]=(char *)malloc(20*sizeof(char));
    // }
    
    // int i=0;
    // char *s=(char *)malloc(20*sizeof(char));
    // scanf("%s",s);
    // while(i<5){
    //     strcpy(x[i++],s);
    //     scanf("%s",s);
    //     strcat(x[i],"\0");
    //     // s
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%s ",x[i]);
    // }
    char s[]="GEEK";
    char y[]="Pk";
    char z[10]="A1tet4545";
    char x='s';
    strncat(y,&x,15000);
    printf("%s ",y);
    
return 0;
}