#include <stdio.h>
#include <stdlib.h>

int foo(int const *wsk1, int *const wsk2){
    return *wsk1-*wsk2;
}

int main()
{
    const int x=12;
    int y=6;
    printf("%d\n",foo(&x,&y));
    printf("%d",foo(&y,&x));
}
