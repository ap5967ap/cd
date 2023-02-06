// #include <stdio.h>
// #include <math.h>
// #include <string.h>
// #include <stdlib.h>
// #define HE(x,y) (x+3)*(y)
// #define real float

// /*
//     typedef interpretation is performed by the compiler where #define statements are performed by preprocessor.
//     typedef follows the scope rule which means if a new type is defined in a scope (inside a function), 
//     then the new type name will only be visible till the scope is there.
//      In case of #define, when preprocessor encounters #define, it replaces all the occurrences, after that (No scope rule is followed).
// */
// typedef float realNumber;
// int main(){
//     int x=3;
//     realNumber y=3.45; //Woks same as float
//     printf("y = %d\n",45);
//     // HE (2,3);
//     int a = HE(4,3);
//     printf("a = %d\n",a);
//     real z=56.2;
//     printf("z = %f\n",z);

// return 0; 
// }
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    typedef struct book{
        char name[50];
        int noofPages;
        float price;
    } book;
    book x;
    book y;
return 0;
}