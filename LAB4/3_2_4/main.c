#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a,int *b)
{
    if(*b>*a){
        int pom=*a;
        *a=*b;
        *b=pom;
    }
}

int main()
{
    int a=5,b=7;
    zamiana(&a,&b);
}
