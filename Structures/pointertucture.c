#include<stdio.h>
#include<string.h>
typedef struct pokemon{//global declaration
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    void change(pokemon* x) {
        // (*x).hp=60;
        // (*x).speed=60;
        // (*x).attack=60;
        x->hp=60;
        x->speed=60;
        x->attack=60;   
    return;
    }
int main(){
    pokemon pikachu ={60,70,80,'a',"Pikachu"};//only orderwise valuse can begiven
    // pikachu.attack =60;
    // pikachu.hp =50;
    // pikachu.speed =100;
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    pokemon* x=&pikachu;
    change(x);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    return 0;
}