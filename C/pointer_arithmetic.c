#include <stdio.h>
#include <math.h>


int main(){
    int a=10;
    char x='c';
    int *p=&a;
    // *p++;//if p = 6422292 (address) then it will add 4 to it
    //this will work if we don't do *p++
    //gives segmentation error as we are trying to access an illegal location

    // *p=x;// a = 99 now
    //p in NOT pointing to x but is pointing to a only
    //to point p to x
    p=&x;//gives warning
    

    printf("%d %c %p %p %p",sizeof(p), *p,p,&a,&x);
    //size of pointer is size of carrier
    char c=4;


return 0;
}
//sizeof() returns in unsigned int form