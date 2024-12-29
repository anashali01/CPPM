#include <stdio.h>
int main()
{
    char name[100];

    printf("Enter your name:");
    scanf("%s",&name);

    for(int i=0;name[i]!='\0';i++){
        if(name[i]>='a' && name[i]<='z')
        {
            name[i]-=32;
        }
    }

    printf("The Uppercase : %s",name);
}