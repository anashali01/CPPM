// Calculate and print the factorial of numbers from 1 to 10.
#include <stdio.h>
int main(){
    int i,fact=1;      

    for(i=1;i<=10;i++)
    {
        fact=fact*i;       //Multiplication of fact with i
    }
    printf("%d",fact);

    return 0;

}