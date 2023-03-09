#include <stdio.h>
#include <stdlib.h>

int silnia(n){
    if(n==0){
        return 1;
    }else{
    return n*silnia(n-1);
    }
}

int main()
{
    printf("Silnia z 5: %d\n",silnia(5));
    printf("Silnia z 5: %d\n",silnia(1));
    printf("Silnia z 5: %d\n",silnia(6));
}


