#include <stdio.h>

typedef float realnumber;

typedef struct pokemon {
    int hp;
    int speed;
    realnumber attack;
    char tier;
} Pokemon;

int main() {
    Pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    Pokemon charizard;
    charizard.attack = 80;
    charizard.hp = 70;
    charizard.speed = 90;
    charizard.tier = 'S';

    printf("Pikachu: hp=%d, speed=%d, attack=%.1f, tier=%c\n",
           pikachu.hp, pikachu.speed, pikachu.attack, pikachu.tier);
    printf("Charizard: hp=%d, speed=%d, attack=%.1f, tier=%c\n",
           charizard.hp, charizard.speed, charizard.attack, charizard.tier);

    return 0;
}