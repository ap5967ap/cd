#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct ap{ //user defined data types
        int hp;
        int speed;
        int attack;
        char grade;
    }ap;
//chainging using function
void change(ap* x){
    x->hp=8965;
    return;
}
int main(){
    ap x;
    x.hp=45;
    x.speed=96;
    x.attack=741;
    x.grade='A';
    ap*ptr;
    ptr=&x;//ptr stores address of first attribute (let's say it be "hp")
    printf("%d\n",(*ptr).hp);
    // *ptr.hp=69;//error
    (*ptr).hp=69;
    printf("%d\n",(*ptr).hp);
    // alter
    ptr->hp=169;
    printf("%d\n",ptr->hp);
    change(ptr);
    printf("%d\n",(*ptr).hp);
return 0;
}