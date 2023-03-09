#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potega(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 2;
    }else{
        return pow(2,n);
    }
}
int main()
{
    printf("Potega 2 do 5: %d\n",potega(5));
    printf("Potega 2 do 1: %d\n",potega(1));
    printf("Potega 2 do 10: %d\n",potega(10));
}
