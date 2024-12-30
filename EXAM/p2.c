// BUBBLE SORT
#include <stdio.h>
int main(){
    int size,i,j,temp;

    printf("Enter The Size Of array:");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the element of array:");
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    printf("Bubble sort:");
    for(j=0;j<size;j++)
    {
        printf("% d",arr[j]);
    }
}