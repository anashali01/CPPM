// Find and display all prime numbers between 1 and 100. 
#include <stdio.h>
int main(){
    int i,j,prime;
    printf("Prime Number Is:-");
    for(i=2;i<=100;i++){
        prime=1;
        for(j=2;j<=i/2;j++){
            if(i % j == 0){
                prime=0;
                break;
            }
            if(prime){
                printf("%d",i);
            }
        }
    }
    return 0;
}