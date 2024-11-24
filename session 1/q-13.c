#include <stdio.h>
int main (){

    int a=10,b=100,swap;  //DECLARE VARIABLE 

    printf("the real value is a = %d and b = %d ",a,b); //BEFORE SWAP VALUE 

    swap=a; //SWAP=A (SWAP VALUE IS A)
    a=b;  //A=B (VALUE OF A IS B)
    b=swap;  //VALUE OF B IS SWAP(A)

    printf("\nThe swap value is a = %d and b = %d ",a,b);  //SWAP VALUE

    return 0;

}