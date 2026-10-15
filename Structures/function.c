#include<stdio.h>
#include<string.h>

typedef struct pokemon {
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;

void fun(pokemon p) {
    printf("%d", p.hp);
}

void change(pokemon *p) {
    p->hp = 60;
    p->attack = 70;
    p->speed = 80;
}

int main() {
    pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    change(&pikachu);
    fun(pikachu);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);

    return 0;
}