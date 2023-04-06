#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    if (*a>*b)
        return *a;
    return *b;
}

int main()
{
    int tab[] = {2,2,1,-1,5,-8,3,4,-2,2,9,8};
    int *wsk=tab-1;
    int b = *(wsk+=3); //b=1
    int c = b+2; // b=1  , c=3
    int d = foo(&b,&c); // b= 1 , c= 3 , d=3
    int e = (wsk+=1)[2]; // b=1  , c= 3 , d= 3 , e=-8
    c = d - (b+=8); // b= 9 , c= -6 , d=3  , e=-8
    e = (d *= 8) + (c /= 3); // b=9  , c=-2  , d=24  , e=22
    b = (c += 8) + (e -= 3); // b= 25 , c= 6 , d=24  , e=19
    b = *wsk + e; // b= 18 , c= 6 , d= 24 , e=19
    return 0;
}
