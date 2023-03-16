#include <stdio.h>
#include <stdlib.h>
int funkcja(int const *a,int const *b){
    return *a+*b;
}
int main()
{
    int a=5,b=7;
    printf("Suma= %d",funkcja(&a,&b));
}
