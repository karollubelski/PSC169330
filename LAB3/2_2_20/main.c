#include <stdio.h>
#include <stdlib.h>

int silnia(unsigned int n){

    if (n==0 || n==1){
        return 1;
    }else{
    return n*silnia(n-1);
    }
}
int main()
{
   printf("n! dla n=10: %d\n",silnia(10));
   printf("n! dla n=6: %d\n",silnia(6));
}
