#include <stdio.h>
#include <math.h>


int main(){
    int * p = 0; // Assignment of null pointer to p
    int * q;
    q = 0; // okay. null pointer again.
    int * x;
    int *z;
    z = 125; // [warning] invalid conversion from 'int' to 'int*'
    double * dptr;
    dptr = 10; //invalid conversion from 'int' to 'double*' [warning]
return 0;
}