#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // char x[]={"HELLO"};
    // char a[]={'H','e','l','l','o'};//strlen(a); not gives 5 as it checks until it gets a '\0' 
    // char c[]={'H',70,'l','l','o'};// all THESE three are same, they are created on stack and expects argument of type int 
    // so char c[]={'H','e,'l',"l","o"}; is WRONG
    // 'a' is of type int and "a" is of type char*
    // char *x={'H','e','l','l','o'}; //gives a dangling pointer
    // char *xa[]={"H", "E", "L", "L", "O",'\0'};
    // char *xxa="HELLO";
    char x[5][4]={"HEL","HYE","GAY","OUE","WSA"};//array of strings but all on stack
    // char x[5][4]={"HEL","HYE","GAY","OUE","WSA"}; one extra space to accommodate \0
    // x[3]="BYE";//error
    x[3][1]='X';//OK
    
    for (int i = 0; i < 5; i++)
    {
        // printf("%s ",x[i]); 
        // printf("\n");
        /*
        HELHYEGAYOXEWSA
        HYEGAYOXEWSA
        GAYOXEWSA
        OXEWSA
        WSA
        */
        // as size of each element is 3 and no space for \0
        // to avoid add 1 to size 
    }
    // x[2][1]="BYE"; //WORKS but in printing array x[2][1] in not printed
    
    // to change value at an element
    strcpy(x[1],"GUY");
    for (int i = 0; i < 5; i++)
    {
        printf("%s ",x[i]);
        printf("\n");
    }
    // printf("%d",strlen(c));
return 0;
}