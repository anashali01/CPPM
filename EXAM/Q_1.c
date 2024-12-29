#include <stdio.h>
int main(){
    int num;

    printf("Enter Your Number:");
    scanf("%d",&num);

    if(num%2 == 0)
    {
        printf("Number Is even!");
    }
    else{
        printf("Number Is Odd!");
    }

    return 0;
    

}