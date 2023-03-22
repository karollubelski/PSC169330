#include <stdio.h>
#include <stdlib.h>

int funkcja(int n, int* w){
    *w=n;
}
int main()
{
    int n=6,w=9;
    printf("n= %d, w=%d\n",n,w);
    funkcja(n,&w);
    printf("n=%d, w=%d\n",n,w);
}
