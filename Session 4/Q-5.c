#include <stdio.h>
int main(){
    int n,min,max;

    printf("Enter Size of array :");
    scanf("%d",&n);

   
    int arr[n];
     for(int i=0;i<n;i++)
    {
        printf("Enter value of arr[%d] :",i);
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    max = arr[0];

    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }

       for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("The Minimum Number is %d\n",min);
    printf("The Maximum Number is %d",max);

return 0;
}