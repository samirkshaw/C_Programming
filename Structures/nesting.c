#include<stdio.h>
#include<string.h>

typedef struct Date {
    int day;
    int month;
    int year;
} Date;

typedef struct Pokemon {
    int hp;
    int speed;
    int attack;
    char tier;
    char name[20];
    Date caughtDate;
} Pokemon;

int main() {
    Pokemon pikachu;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.attack = 60;
    pikachu.tier = 'A';
    strcpy(pikachu.name, "Pikachu");
    pikachu.caughtDate.day = 15;
    pikachu.caughtDate.month = 6;
    pikachu.caughtDate.year = 2023;

    printf("Name: %s\n", pikachu.name);
    printf("HP: %d\n", pikachu.hp);
    printf("Attack: %d\n", pikachu.attack);
    printf("Speed: %d\n", pikachu.speed);
    printf("Tier: %c\n", pikachu.tier);
    printf("Caught on: %02d/%02d/%d\n", pikachu.caughtDate.day, pikachu.caughtDate.month, pikachu.caughtDate.year);

    return 0;
}
    