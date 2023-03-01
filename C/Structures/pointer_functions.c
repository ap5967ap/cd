#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int x(int n){
    return n*3;
}
int y(int n){
    return n*2;
}
int z(int n){
    int (*func)(int); //<return-type (*func_name) parameter type>
    if (n%2)
    {
        func=&x; //same works if written func = x;
    }
    else{
        func=y;
    }
    return func(n);
}
int main(){
    printf("%d\n",z(3)); 
    printf("%d\n",(*z)(4)); //same as z(4)

return 0;
}