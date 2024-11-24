// Check Prime Number: Create a program that takes an input number from the user and
// checks if it is a prime number using a `for` loop.
#include <stdio.h>
int main()
{
    int i,num,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            temp++;
        }
        
    }
    if(num<=2){
        printf("number is prime");
    }
    else{
        printf("number is not prime");
    }
return 0;
}
