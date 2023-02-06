#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

// // void fun(ap y){ gives error as ap is defined main and is not accessible outside main() function 
// //     printf("%d",y.hp);
// //     return;
// // }
// int main(){
//     typedef struct ap{ //user defined data types
//         int hp;
//         int speed;
//         int attack;
//         char grade;
//     }ap;
//     ap x;
//     x.hp = 0;
//     x.speed =45;
//     x.attack =89;
//     x.grade ='S';

// return 0;
// }
typedef struct ap{ //user defined data types
        int hp;
        int speed;
        int attack;
        char grade;
    }ap;
void fun(ap y){ 
    printf("%d\n",y.hp);
    printf("%c\n",y.grade);
    return;
}
// we can't values of struct ap using functions
void change(ap y){//pass by value and new function is created in function change() stack and its vlaue is only changed but not of main
    y.hp = 7401;
} 

// STRUCT AS PASSED BY VALUE

void change_re(ap *y){//pass by reference
    y->hp ++;
    (*y).grade = 'R';
}
 int main(){
    
    ap x;
    x.hp = 40;
    x.speed =45;
    x.attack =89;
    x.grade ='S';
    fun(x);
    change(x);
    fun(x);
    change_re(&x);
    fun(x);
return 0;
}