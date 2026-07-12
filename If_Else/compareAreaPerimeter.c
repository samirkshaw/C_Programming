#include<stdio.h>
int main(){
    float l,b;
    printf("Enter Length :");
    scanf("%f",&l);
    printf("Enter base :");
    scanf("%f",&b);

    float area = l*b , perimeter = 2*(l+b);
    printf("Area = %f\nPerimeter = %f",area,perimeter);

    if(area>perimeter){
        printf("\nThe area of the rectangle is bigger than its perimeter.");
}
    if(area<perimeter){
        printf("The area of the rectangle is smaller than its perimeter.");
}
    if(area==perimeter){
        printf("The area of the rectangle is equal to its perimeter.");
}
   return 0;
}