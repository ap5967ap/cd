#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct Emp{
    int salary;
    int id;
}emp;
emp* alloc(){
    int n;
    scanf("%d", &n);
    emp*arr =(emp*)malloc(n*sizeof(emp));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].id);
        scanf("%d", &(arr+i)->salary);
    }
    return arr;
}   

void falloc(emp**ar){
    int n;
    scanf("%d", &n);
    emp*arr =(emp*)malloc(n*sizeof(emp));
    for (int i = 0; i < n; i++)
    {
        arr[i].id = i*4+2;
        arr[i].salary =i*2*4*5*7+45;
    }
    *ar=arr;
} 
int main(){
    emp*ar;
    falloc(&ar);
return 0;
}