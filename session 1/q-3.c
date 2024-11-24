#include <stdio.h>
#include <string.h>
int main(){

    char len[100];  //DECLARE THE STRING VARIABLE

    printf("enter your name :");  //TAKE INPUT FROM USER
    scanf("%s",&len);

    int result= strlen(len);  //DECLARE ONE MORE VARIABLE FOR LENGTH
    
    printf("the length of your name is %d",result);  //PRINT THE LENGTH
    
    return 0;

}