#include <stdio.h>
int main(){
    int num,digitcount=0;

    printf("Enter your number:");
    scanf("%d",&num);

    while(num>0){
        num/=10;
        digitcount++;
       
    }

     printf("%d",digitcount);

     return 0;
}