#include <stdio.h>
int main(){
    int num,rev=0,rem,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }

    if(temp==rev){
        printf("The number is palindrome");
    }

    else{
        printf("The number    is not palindrome");
    }

    return 0;
}