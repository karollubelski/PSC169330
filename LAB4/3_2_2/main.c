#include <stdio.h>
#include <stdlib.h>

int *funkcja(int *a, int *b)
{
    if(*a<*b) return a;
    else return b;
}
int main()
{
    int a=3,b=7;
    printf("Adres a= %p\n",&a);
    printf("Adres b= %p\n",&b);
    printf("%p",funkcja(&a,&b));
}
