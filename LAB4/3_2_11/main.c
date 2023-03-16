#include <stdio.h>
#include <stdlib.h>

int *funkcja(unsigned int n){
    return malloc(n*sizeof(int));
}
int main()
{
    int x=funkcja(5);
    printf("%p\n",x);
}
