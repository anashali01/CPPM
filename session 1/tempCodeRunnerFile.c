#include <stdio.h>
float add(float x , float y){
        return x + y;
    }
float sub(float x,float y){
    return x - y;
}
float multi(float x,float y){
    return x * y;
}
float div(float x,float y){
    return x / y;
}
float mod(float x,float y){
    return (int)x% (int)y;
}

int main(){

    float num1,num2,r;
    printf("Enter  the first number: ");
    scanf("%f",&num1);
    printf("Enter  the second number: ");
    scanf("%f",&num2);
    printf("Press 1 for  addition\n");
    printf("Press  2 for subtraction\n");
    printf("press  3 for multiplication\n");
    printf("press  4 for division\n");
    printf("Press 5 for modulus\n");

    int  choice;

    printf("Enter  your choice");
    scanf("%d",&choice);

    switch(choice){

    case 1:     
    r=add(num1,num2);
    printf(" the answer of  %.2f + %.2f =%.2f\n",num1,num2,r);

    case 2:
    r=sub(num1,num2);
    printf("the answer of  %.2f - %.2f =%.2f\n",num1,num2,r);

    case 3:
    r=multi(num1,num2);
    printf("the answer of  %.2f * %.2f =%.2f\n",num1,num2,r);

    case 4:
    r=div(num1,num2);
    printf("the answer of  %.2f / %.2f =%.2f\n",num1,num2,r);

    case 5:
    r=mod(num1,num2);
    printf("the answer of  %.2f  %.2f =%.2f\n",num1,num2,r);

}
    return 0;
    }