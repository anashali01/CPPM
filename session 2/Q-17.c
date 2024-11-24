#include <stdio.h>
int main(){
    int num,even_sum=0,odd_sum=0,i;

    printf("Enter Your name:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i%2==0){
            even_sum=even_sum+i;
        }
        else{
            odd_sum=odd_sum+i;
        }
    }

    printf("the answer of even number=%d\n",even_sum);
    printf("the answer of odd number=%d",odd_sum);
    
    return 0;
    
}