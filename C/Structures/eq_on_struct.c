#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    bool flag = true;
    date a,b,c;
    a.day=19;
    a.month=1;
    a.year=2004;
    b.day=19;
    b.month=1;
    b.year=2004;
    // printf("%d",a==b); //invalid operands to binary == (have 'date {aka struct date}' and 'date {aka struct date}')
    // Can;t compare struct
    // to compare struct use
    if (a.day!=b.day) flag = false;
    if (a.month!=b.month) flag = false;
    if (a.year!=b.year) flag = false;
    if(flag)
        printf("EQUAL\n");
    else
        printf("UNEQUAl");
return 0;
}