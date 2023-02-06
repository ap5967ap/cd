#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    typedef struct ap{ //user defined data types
        int hp;
        int speed;
        int attack;
        char grade;
    }ap;
    ap a,b;
    a.attack =100;
    a.speed =41;
    a.hp=1000;
    a.grade ='X';
    b=a;//WORKS Perfectly fine
    //DEEP COPY
    //if we try to change b then a will NOT change
    b.attack =2000;
    printf("b.attack=%d\n",b.attack);
    printf("a.grade=%c\nb.grade=%c\n",a.grade,b.grade);
    printf("a.attack=%d",a.attack);
return 0;
}