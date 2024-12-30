#include <stdio.h>
union data{
    int num;
    char letter;
    float salary;
};

int main(){
   union data d1;

   d1.num=2;
   printf("%d\n",d1.num);	
   d1.letter='A';
   printf("%c\n",d1.letter);	
   d1.salary=12300.00;
   printf("%.2f\n",d1.salary);	

    printf("%d %c",d1.num,d1.letter);

}