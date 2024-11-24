#include <stdio.h>
int main (){

    int a,b;  //DECLARE VARIABLE

    printf("enter first number :");   //TAKE INPUT FROM USER
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);

    if(a<b){                   //MAX VALUE 
        printf("b is max");
    }

    else{
        printf("a is max");
    }

    return 0;

}