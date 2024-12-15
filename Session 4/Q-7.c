#include <stdio.h>
int main(){
    int n,i,sum=0;

    printf("Enter Size Of Array :");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter The Element Of arr[%d]:",i);
        scanf("%d",&arr[i]);
    }

     for(i=0;i<n;i++)
    {
        sum= sum+arr[i];
    }

    printf("The Answer Of array : %d",sum);
}