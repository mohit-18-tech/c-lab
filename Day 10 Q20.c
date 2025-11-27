// Q20: Write a program to display the name of the day based on the day number (1 for Monday, 2 for Tuesday, etc.) using switch-case.
 
 // PROGRAM:

#include<stdio.h>
int main(){
    int day_of_week;
    printf("Enter day number (1-7): ");
    scanf("%d",&day_of_week);
    switch(day_of_week){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }
}