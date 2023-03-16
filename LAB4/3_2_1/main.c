#include <stdio.h>
#include <stdlib.h>

int funkcja(int *a, int *b)
{
    if(*a<*b) return *a;
    else return *b;
}
int main()
{
    int a=3,b=7;
    printf("%d",funkcja(&a,&b));
}
