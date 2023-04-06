#include <stdio.h>
#include <stdlib.h>
//rok 2020
//zad3
int foo(int n, int m){
    int temp=1;
    while(temp<n+m){
        temp*=2;
    }
    return temp/2;
}
int fooV2(int n,int m){
    return pow(2,ceil(log2(n+m))-1);
}
//zad5
int foo2(int n){
    if(n==0)
        return 1;
    if(n==1)
        return 2;
    if(n%2==0)
        return foo2(n-1)+2*n;
    return foo2(n-2)*(2*n-1);
}
//zad6
int foo3(int m,int n, int tab[]){
    int suma=0;
    if(n==0){
        return tab[0];
    }
    for(int i=n;i<m;i+=n){
            suma+=tab[i];
    }
    return suma;
}
int main()
{
    int tab[]={3,-4,2,3,7};
    printf("%d\n",foo3(5,2,tab));
    printf("--\n");
    printf("%d\n",foo(4,5));
    printf("%d\n",foo(1,1));
    printf("--\n");
    printf("%d\n",fooV2(4,5));
    printf("%d\n",fooV2(1,1));
    printf("--\n");
    printf("%d\n",foo2(5));
    printf("%d\n",foo2(3));

}
