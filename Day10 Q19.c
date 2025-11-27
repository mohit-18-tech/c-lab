// Q19: Write a program to check whether the given sides form a valid triangle or not. If valid, also determine the type of triangle (equilateral, isosceles, scalene).
 
 // PROGRAM:

#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("Enter three sides of a triangle: ");
    scanf("%d,%d,%d",&side1,&side2,&side3);
    if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2){
        if((side1==side2) && (side2==side3)){
            printf("The triangle is equilateral.\n");
        }
        else if(side1==side2 || side2==side3 || side1==side3){
            printf("The triangle is isosceles.\n");
        }
        else{
            printf("The triangle is scalene.\n");
        }
        printf("The sides form a valid triangle.\n");
    }
    else{
        printf("The sides do not form a valid triangle.\n");
    }

}
