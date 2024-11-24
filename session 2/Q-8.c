//Nested Loop Pattern: Implement a nested `for` loop to print a simple 3x3 grid of numbers.
#include <stdio.h>
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("%d ",j);
        }
        printf("\n");
}

    return 0;

}
