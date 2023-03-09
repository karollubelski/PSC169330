#include <stdio.h>
#include <stdlib.h>

int silnia(int n){

    if (n==0 || n==1){
        return 1;
    }else{
    return n*silnia(n-1);
    }
}
int main()
{
   printf("Silnia dla n=0: %d\n",silnia(0));
   printf("Silnia dla n=6: %d\n",silnia(6));
   printf("Silnia dla n=3: %d\n",silnia(3));
}
