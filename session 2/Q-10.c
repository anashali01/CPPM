// goto` Statement Demonstration: Write a program that demonstrates the use of the
// `goto` statement to jump out of nested loops
#include <stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){   
            printf("%d\n",j);  
            if(j==5){
                goto end;
            }
        }
    }
    end:
    printf("You exit loop!");
}