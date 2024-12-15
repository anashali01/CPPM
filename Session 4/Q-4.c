#include <stdio.h>
int main()
{
    int i,arr[5],arr2[5],arr3[5];
    for(i=0;i<5;i++)
    {
        printf("Enter value of arr[%d] :",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("Enter value of arr2 [%d] :",i);
        scanf("%d",&arr2[i]);
    }
    
    printf("The sum of 2 array is :\n");
    for(i=0;i<5;i++)
    {
        printf("arr3[%d] : %d\n",i,arr[i]+arr2[i]);
    }

    return 0;

}