#include <stdio.h>
#include <stdlib.h>

double* funkcja(){
    double*wsk=malloc(sizeof(double));
    return wsk;
}
int main()
{
    printf("%p\n",funkcja);
}
