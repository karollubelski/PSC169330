#include <stdio.h>
#include <stdlib.h>

int funkcja(int n){
    if(n==0 || n==1){
        return 1;
    }else{
    int suma=0;
    for(int i=0;i<n;i++){
        suma+=funkcja(i);
    }
    return suma;
    }
}
int main()
{
    printf("Wynik dla n=4: %d\n",funkcja(4));
    printf("Wynik dla n=5: %d\n",funkcja(5));
    printf("Wynik dla n=1: %d\n",funkcja(1));
    printf("Wynik dla n=3: %d\n",funkcja(3));
}
