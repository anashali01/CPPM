// Simple `do-while` User Input: Write a `do-while` loop program that asks the user for a
// number and prints it, continuing until the user inputs 0.
#include <stdio.h>
int main(){
    int i;
    do{
        printf("Enter Number Here:");
        scanf("%d",&i);

        if(i!=0){
        printf("Enter 0 for exit!!\n");
    }
        else{
        printf("Exit Succesfully!!");
    }
    }
    while(i!=0);

    return 0;

}