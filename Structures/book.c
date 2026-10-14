#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int noOfPages;
        float price; 
    }a;
    a.noOfPages = 500;
    a.price = 230;
    strcpy(a.name, "Eat that Frog");

    printf("%s\n", a.name);
    return 0;
}