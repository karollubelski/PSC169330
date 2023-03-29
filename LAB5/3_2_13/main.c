#include <stdio.h>
#include <stdlib.h>

double foo1(double(*foo)(int),int y){
    return foo(y);
}
double sqrt(int x){
    return x*x;
}
int main()
{
    int z=5;
    double(*foo)(int)=&sqrt;
    double wynik = foo1(foo,z);
    printf("%lf",wynik);
}
