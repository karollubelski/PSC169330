#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pierwiastek(int x, int m){
    return (int)pow(x,1.0/m);
}
int suma_pierwiastkow(int n, int m){
    int suma=0;
    for(int i=0;i<=n;i++){
        suma+=pierwiastek(i,m);
    }
    return suma;
}
int main()
{
    int n,m;
    printf("Podaj n: ");
    scanf("%d",&n);
    printf("Podaj m: ");
    scanf("%d",&m);
    printf("%d\n",suma_pierwiastkow(n, m));

}

