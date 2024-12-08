#include <stdio.h>
int main()
{
  int n,min,i;
  printf("Enter size of array:");
  scanf("%d",&n);

  int arr[n];
  min=arr[0];

  for(i = 0; i < n ; i++)
  {
       printf("enter value of arr[%d]:",i);
       scanf("%d",&arr[i]);
  }

  for(i=0;i<n;i++)
  {
    if(min>arr[i])
    {
        min=arr[i];
    }
  }

  printf("The Smallest Number Is: %d",min);

  return 0;

}