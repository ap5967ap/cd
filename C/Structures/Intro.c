#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    struct ap{ //user defined data types
        int hp;
        int speed;
        int attack;
        char grade;
    };
    // no memory is allocatedm until the object of struct ap is created
    struct ap x; //now memory to store hp, speed, attack is allocated
    x.attack = 45;
    x.hp =120;
    x.speed =656;
    x.grade ='A';
    struct ap y; //now memory to store
    y.attack =410;
    y.speed =42;
    y.hp =89;
    y.grade ='B';

    struct student{
        int roll;
        char grade; 
        char name[20];
         
    };
    struct student ap;
    ap.roll =45;
    ap.grade ='X';
    strcpy(ap.name,"ADITYA");   


    // Alter way of declaration 

    struct ak{ //user defined data types
        int hp;
        int speed;
        int attack;
        char grade;
    } ankit, satyam; //objects 
    ankit.attack =56;
    struct ak attk={56,96,12,'A'};//ALter way of declaration
    // elements of structure are stored in continuous memory location   
return 0;
}  