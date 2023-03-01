#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
    }pokemon;
    typedef struct legendPokemon
    {
        pokemon normal;
        char ability[10];
    }legendPokemon;
    legendPokemon ap;
    strcpy(ap.ability,"Billion");
    ap.normal.attack=54;
    ap.normal.speed=100;
    ap.normal.hp=4;
return 0;
}