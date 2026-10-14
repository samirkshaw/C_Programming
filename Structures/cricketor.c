#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Cricketor{
        int age;
        int matches;
        float average;
        char name[25];
    }Cricketor;

    Cricketor arr[20];
    int i = 0;
    while(i < 2){
        printf("cricketer %d\n", i);
        scanf(" %[^\n]", arr[i].name);
        scanf("%d", &arr[i].age);
        scanf("%d", &arr[i].matches);
        scanf("%f", &arr[i].average);   
        i++;
    }
    int j = 0;
    while(j < 2){
        printf("cricketer %d\n", j);
        printf("%s\n", arr[j].name);
        printf("%d\n", arr[j].age);
        printf("%d\n", arr[j].matches);
        printf("%f\n", arr[j].average);
        printf("\n");
        j++;
    }
    return 0;
}