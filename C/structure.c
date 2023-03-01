#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


struct complex
{
    float real;
    float imaginary;//real and imaginary are two members or fields of struct complex

};
struct student{
    char name[100];
    char marks;
    struct complex id;
};
struct list
{
    int v;
    struct list *next;
};

struct complex g;

int main(){
    struct complex a, b, c;
    a.real =5;
    a.imaginary=10;
    printf("%f %f\n",a.real,a.imaginary);
    b=a;//OK
    // if(a==b){ERROR} 
        // printf("WORKS\n");
    // }
    // POINTER TO Structure
    struct complex *p;
    p=&a;
    printf("%f %f\n",p->real,p->imaginary);
    
//Pointers to structs, unions, and C++ objects may be ambiguous since a struct/object's address is the same as its first member
//  and a union's address is the same as all its members.
    printf("%f %f\n",(*p).real,(*p).imaginary);
    struct complex *q=malloc(sizeof(struct complex));
    q->real=56;
    q->imaginary= 21;
    printf("%f %f\n",q->real,q->imaginary);
    struct complex *v;
    
return 0;
}