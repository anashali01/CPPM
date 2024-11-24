#include <stdio.h>
int main(){
    int num,fd,ld,sum=0;

    printf("Enter Your number:");
    scanf("%d",&num);

    
    while(num>0){
       ld=num%10;
       sum=sum+ld;
       num/=10;
    }

    printf("The sum of digit is %d",sum);

    return 0;
}