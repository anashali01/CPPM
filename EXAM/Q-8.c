#include <stdio.h>
int main(){
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int arr[size],rev[size];

    for(int i=0;i<size;i++)
    {
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }

    for(int i=size-1,j=0;i>0,j<size;i--,j++)
    {
        rev[j]=arr[i];
        printf("Rev [%d]:%d",j,rev[j]);
    }

    
}