#include <stdio.h>
#include <stdlib.h>

int funkcja(int *a, int *b)
{
    int pom;
    pom=*a;
    *a=*b;
    *b=pom;
    printf("a= %d \nb= %d",*a,*b);
}
int main()
{
    int a=13,b=8;
    funkcja(&a,&b);
}
