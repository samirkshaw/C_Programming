#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.attack =60;
    pikachu.hp =50;
    pikachu.speed =100;
    pikachu.tier = 'A';

    struct pokemon charlizard;
    charlizard.attack =60;
    charlizard.hp =50;
    charlizard.speed =100;
    charlizard.tier = 'S';

    printf("Pikachu: hp=%d, speed=%d, attack=%d, tier=%c\n", pikachu.hp, pikachu.speed, pikachu.attack, pikachu.tier);
    printf("Charlizard: hp=%d, speed=%d, attack=%d, tier=%c\n", charlizard.hp, charlizard.speed, charlizard.attack, charlizard.tier);

    return 0;
}