#include <stdio.h>
int main(){
    int  a = 5;
    int  b = 10;

    int bit_and=a&b;
    int bit_or=a|b;
    int bit_not_a=~a;
    int bit_not_b=~b;
    printf("Bitwise AND  of %d and %d is %d\n",a,b,bit_and);
    printf("Bitwise  OR  of %d and %d is %d\n",a,b,bit_or);
    printf("Bitwise  NOT of %d is %d\n",a,bit_not_a);
    printf("Bitwise   NOT of %d is %d\n",b,bit_not_b);
    return 0;

}
