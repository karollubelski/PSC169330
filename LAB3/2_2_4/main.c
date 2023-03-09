#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potega(int n){
    if(n==0){
        return 1;
    }else{
        return pow(2,n);
    }
}
int main()
{
    printf("Potega 2 dla n=10 wynosi: %d \n",potega(10));
    printf("Potega 2 dla n=4 wynosi: %d \n",potega(4));
    printf("Potega 2 dla n=0 wynosi: %d \n",potega(0));

}
