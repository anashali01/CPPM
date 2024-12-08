#include <stdio.h>
int main()
{
    float sum=0.0,avg;
    int n,i;

    printf("Enter size of array :");
    scanf("%d",&n);

    int  arr[n];
    for(i = 0;i < n; i++)
    {
        printf("enter value of arr[%d] :",i);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    avg = sum / n;
    printf("sum of array elements = %.2f\n",avg);
    
}