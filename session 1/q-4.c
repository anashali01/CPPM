#include <stdio.h>
#include <string.h>
int main (){

    char first [100];  //DECLARE VARIABLE
    char last[100];    //DECLARE SECOND VARIABLE

    printf("Enter your first name :");  //TAKE INPUT FROM USER
    scanf("%s",&first);
    printf("Enter your second name :");
    scanf("%s",&last);

    printf("%s",strcat(first,last)); //JOIN BOTH NAME 
    
    return 0;

}