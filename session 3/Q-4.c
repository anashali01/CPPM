#include <stdio.h>
int main(){
    int i,j,row2,coloumn2;
    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }
    for(row2=1;row2<=2;row2++){
        for(coloumn2=1;coloumn2<=2;coloumn2++){
            printf("%d ",row2*coloumn2);
        }
        printf("\n");
    }
}