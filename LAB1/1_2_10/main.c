#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    printf("Podaj liczbe niewymierna: ");
    scanf("%lf",&x);
    printf("Wartosc bezwgledna podanej liczby to: %lf\n",fabs(x));
    return 0;
}
