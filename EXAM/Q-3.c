#include <stdio.h>
#include <string.h>
int main (){

    char first [100];  
    char last[100];

    printf("Enter your first name :");
    scanf("%s",&first);
    printf("Enter your second name :");
    scanf("%s",&last);

    printf("%s",strcat(first,last));
    
    return 0;

}