#include <stdio.h>
int main(){
    int size,i;
    printf("Enter the size of array:");
    scanf("%d",&size);

    int arr[size];
    for(i=0;i<size;i++)
    {
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++){
        if(arr[i]>arr[0]){
            printf("a[%d]");
        }
    }
}