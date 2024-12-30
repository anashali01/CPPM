#include <stdio.h>
int main(){
    int num=10;
    int *ptr;

    ptr=&num;

    printf(" num = %d\n",num);
    printf(" ptr = %d\n",ptr);
    printf(" *ptr = %d\n",&ptr);
    printf(" *ptr = %d",&num);


}