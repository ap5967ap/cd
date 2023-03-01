#include <stdio.h>
int main(){
    char x='c';
    char *p=&x;
   *(++p);//if p = 6422292 (address) then it will add 4 to it

    
    // printf("%ld %c %p %ld",sizeof(p), *p,p,sizeof(x));//size of pointer is machine dependent but not variable dependent
    //it is 4 on a 32bit machine and 8 on a 64 bit machine 

return 0;

}