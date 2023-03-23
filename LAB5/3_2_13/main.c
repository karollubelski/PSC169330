#include <stdio.h>
#include <stdlib.h>

double func1(double(*func)(int),int y){
    return func(y);
}
double sqrt(int x){
    return x*x;
}
int main() {
    int y = 5;
    double (*func)(int) = &sqrt;
    double wynik = func1(func, y);
    printf("Wynik dla y= %d wynosi= %f\n",y,wynik);
}

