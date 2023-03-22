#include <stdio.h>
#include <stdlib.h>

double *funkcja(int n){
    return malloc(n*sizeof(double));
}
int main()
{
    double *x=funkcja(5);
    printf("%p\n",x);
}
