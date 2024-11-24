#include <stdio.h>
int main (){

    int a=100,b=10; //DECLARE VARIABLE

    printf("Before swap the value of a = %d and b = %d",a,b);  //BEFORE SWAP

    a=a+b; //(100+10)=110
    b=a-b; //(110-10)=100
    a=a-b; //(110-1OO)=10

    printf("\nAfter the swap value of a = %d and b = %d",a,b);  //AFTER SWAP

    return 0;

}