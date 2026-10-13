#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

    pokemon arr[3];
    arr[0].attack =60;
    arr[0].hp =50;
    arr[0].speed =100;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"Pikachu");

    arr[1].attack =60;
    arr[1].hp =50;
    arr[1].speed =100;
    arr[1].tier = 'S';
    strcpy(arr[1].name,"Charlizard");
    int i=0;
    while(i<2){
        printf("%s\n",arr[i].name);
        printf("%c\n",arr[i].tier);
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].speed);
        printf("%d\n",arr[i].attack);
        printf("\n");
        i++;
    }


        return 0;
}