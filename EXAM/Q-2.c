#include <stdio.h>
int main(){
    int num1,num2,choice;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);

do{
    printf("Press 1 Add\n");
    printf("Press 2 Sub\n");
    printf("Press 3 Mul\n");
    printf("Press 4 Div\n");
    printf("Press 5 Mod\n");
    printf("Press 6 Exit\n");

    printf("Choice:");
    scanf("%d",&choice);

    
         switch(choice){
            case 1:
            printf("Ans of Add: %d",num1+num2);
            break;
            case 2:
            printf("Ans of Sub: %d",num1-num2);
            break;
            case 3:
            printf("Ans of Mul: %d",num1*num2);
            break;
            case 4:
            printf("Ans of Div: %d",num1/num2);
            break;
            case 5:
            printf("Ans of Mod: %d",num1%num2);
            break;
            case 6:
            printf("Exit !!!");
            break;
    }
    }
    while(choice != 6);
   
    return 0;
     
}