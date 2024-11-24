#include <stdio.h>
#include <string.h>
int main(){
    char rev[50],str[50];
    printf("Enter a string: ");
    scanf("%s",&str);
    strcpy(rev,str);
    strrev(rev);

    if(strcmp(str,rev)==0){
        printf("The string is a palindrome.");
    }
    else{
        printf("The string is not a palindrome.");
    }
    return 0;
}