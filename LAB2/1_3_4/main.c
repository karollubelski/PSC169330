#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Podaj pierwsza liczbe: \n");
    scanf("%d",&a);
    printf("Podaj druga liczbe: \n");
    scanf("%d",&b);

    if(abs(a)>abs(b)){
        printf("Wieksza wartosc bezwzgledna: %d%",a);
        }else{
        printf("Wieksza wartosc bezwzgledna: %d",b);
        }
}


