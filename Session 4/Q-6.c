#include <stdio.h>
int main(){
    int n,i;

    printf("Enter Size of Array: ");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter Element arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d is even\n",arr[i]);
        }

        else
        {
            printf("%d is odd\n",arr[i]);
        }
    }

    return 0;

}