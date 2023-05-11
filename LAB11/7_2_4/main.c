#include <stdio.h>
#include <stdlib.h>

struct zespolone{
    double im;
    double re;
};
struct zespolone suma(struct zespolone x,struct zespolone d){
    struct zespolone sum;
    sum.re=x.re+d.re;
    sum.im=x.im+d.im;
    return sum;
};
int main()
{
    struct zespolone x;
    x.re=3;
    x.im=6;
    struct zespolone d;
    d.re=1;
    d.im=3;
    struct zespolone sum=suma(x,d);
    printf("%lf+",sum.re);
    printf("%lfi\n",sum.im);

}
