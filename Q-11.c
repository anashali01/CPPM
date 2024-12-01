// Print all possible pairs of numbers between 1 and 5 using nested loops.
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf("(%d , %d)\n",i,j);
        }
    }

    return 0;
    
}