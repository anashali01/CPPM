#include <stdio.h>
int main (){

    int a,b;  //DECLARE VARIABLE

    printf("enter first number :");  //TAKE INPUT FROM USER
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);

    if(a>b){                 //MINIMUM VALUE
        printf("b is low");
    }

    else{
        printf("a is low");
    }

    return 0;

}