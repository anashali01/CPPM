#include <stdio.h>
#include <math.h>

int main (){

    int a,b;  //DECLARE TWO VARIABLE

    printf("enter your first number");  //TAKE INPUT FROM USER
    scanf("%d",&a);
    printf("enter your second number");
    scanf("%d",&b);

    if(a==b){
        printf("\nBoth number are equal");    //EQUAL
        }  

    else{
        printf("\nBoth number are not equal");  //NOT EQUAL
    }

    if(a>b){
        printf("\n%d is greater than %d",a,b);  //GREATER
    }

    else{
        printf("\n\n%d is less than %d",a,b);  //LESS
    }

    if(a>=b){
        printf("\n%d is greater or equal %d",a,b);  //GREATER OR EQUAL
    }

    else{
        printf("\n%d is less or equal %d",a,b);  //LESS OR EQUAL
    }

    return 0;
    
}