#include <stdio.h>
#include <math.h>
int main(){
    float num;
    printf("Enter number:");
    scanf("%f",&num);

    printf("The ceiling of number %.2f \n",ceil(num));
    printf("The ceiling of number %.2f",floor(num));
}