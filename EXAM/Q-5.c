#include <stdio.h>
int main(){
    int size,i,target;
    printf("Enter the size of array:");
    scanf("%d",&size);

    int arr[size];
    for(i=0;i<size;i++)
    {
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("Target:");
    scanf("%d",&target);
    for(i=0;i<size;i++){
        if(arr[i]==target){
            printf("a[%d]",i);
        }
    }
}