#include <stdio.h>
#include <stdlib.h>
int euklides(int n,int m){
    if(m!=0){
        return euklides(m,n%m);
    }else{
    return n;
    }
}
int main()
{
    int n,m,wynik;
    printf("Podaj n: ");
    scanf("%d",&n);
    printf("Podaj m: ");
    scanf("%d",&m);
    wynik=euklides(n,m);
    printf("NWD dla %d i %d wynosi: %d",n,m,wynik);
}
