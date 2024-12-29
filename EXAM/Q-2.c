#include <stdio.h>
int main(){
    int num1,num2,choice;

    printf("Enter Your first number:");
    scanf("%d",&num1);

    printf("Enter Your second number:");
    scanf("%d",&num2);

    
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for divison\n");
    printf("Press 5 for modulus\n");
    printf("Press 6 for exist\n");
    

    printf("Enter your choice :");
    scanf("%d",&choice);

    do
    {
        switch (choice)
    {
    case 1:
    printf("Answer of addition : %d",num1+num2);
    break;

    case 2:
    printf("Answer of subtraction : %d",num1-num2);
    break;

    case 3:
    printf("Answer of multiplication : %d",num1*num2);
    break;
    case 4:
    printf("Answer of divison : %d",num1/num2);
    break;
    case 5:
    printf("Answer of modulus : %d",num1%num2);
    break;
    case 6:
    printf("You Exit Enjoy!!");
    break;
    default:
    printf("Invalid number");

    }
    } while (choice != 6);
    
    
    return 0;
    
    
}