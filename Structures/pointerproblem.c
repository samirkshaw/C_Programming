#include<stdio.h>
typedef int* pointer;
int main(){
int x=5,y=6;
//int* x,y;==int*x and int y ,cant declare teo pointers at one place
//  int* a=&x,b=&y;wont work 
pointer a=&x,b=&y;//will work
printf("%p \n %p",a,b);
return 0;
}