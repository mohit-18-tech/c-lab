// Q18: Write a program to calculate the grade of a student based on marks obtained.
 
 // PROGRAM:

#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("Grade A\n");
    }
    else if(marks>=80 && marks<90){
        printf("Grade B\n");
    }
    else if(marks>=70 && marks<80){
        printf("Grade C\n");
    }
    else if(marks>=60 && marks<70){
        printf("Grade D\n");
    }
    else if(marks>=0 && marks<60){
        printf("Grade F\n");
    }
    else{
        printf("Invalid marks entered.\n");
    }
}