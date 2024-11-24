#include <stdio.h>
#include <string.h>
#include <math.h>
int main (){

    int a,b;  //DECLARE TWO VARIABLE

    printf("Enter your first number :");  //TAKE INPUT FROM USER
    scanf("%d",&a);
    printf("Enter your second number :");
    scanf("%d",&b);

    //ADDITION
    printf("\nThe ans of addition : %d",a+b); 

    //SUBTRACTION
    printf("\nThe ans of subtraction : %d",a-b);

    //MULTIPLICATION
    printf("\nThe ans of multiplication : %d",a*b);

    //DIVISION
    printf("\nThe ans of division : %d",a/b);

    //MODULUS
    printf("\nThe ans of modulus : %d",a%b);

    return 0;
    
}