#include <stdio.h>
#include <stdlib.h>

int *funkcja(){
    return malloc(sizeof(int));
}
int main()
{
    int *x=funkcja();
    printf("%p\n",x);
}
