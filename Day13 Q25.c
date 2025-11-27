// Q25: Write a program to create a simple calculator using switch-case for operations like addition, subtraction, multiplication, division, and modulus.
 
 // PROGRAM:

#include<stdio.h>
int main(){
    int calculator;
    float num1,num2,result;
    printf("Select operation to perform:\n");   
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n. Modulus\n");
    printf("Enter your choice (1-5): ");
    scanf("%d",&calculator);
    printf("Enter two numbers: ");
    scanf("%f,%f",&num1,&num2);
    switch(calculator){
        case 1:
            result=num1+num2;
            printf("The sum of %.2f and %.2f is %.2f\n",num1,num2,result);
            break;
        case 2:
            result=num1-num2;
            printf("The difference when %.2f is subtracted from %.2f is %.2f\n",num2,num1,result);
            break;
        case 3:
            result=num1*num2;
            printf("The product of %.2f and %.2f is %.2f\n",num1,num2,result);
            break;
        case 4:
            if(num2!=0){
                result=num1/num2;
                printf("The quotient when %.2f is divided by %.2f is %.2f\n",num1,num2,result);
            }
            else{
                printf("Error! Division by zero.\n");
            }
            break;
        case 5:
            if((int)num2!=0){
                result=(int)num1%(int)num2;
                printf("The modulus when %d is divided by %d is %d\n",(int)num1,(int)num2,(int)result);
            }
            else{
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid input! Please select a valid operation.\n");
    }
    return 0;
}
