// Write a program to generate and print the first 15 terms of the
// Fibonacci series using a simple for loop
#include <stdio.h>
int main(){
    int n=15;
    int fib1=0, fib2=1, nextTerm;
    for(n=0;n<=15;n++){
        if(n==0){
            printf("%d ",fib1);
        }
        else if(n==1){
            printf("%d ",fib2);
        }
        else{
            nextTerm=fib1+fib2;
            printf("%d ",nextTerm);
            fib1=fib2;
            fib2=nextTerm;
        }
    }
    printf("\n");
}