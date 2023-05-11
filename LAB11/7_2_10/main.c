#include <stdio.h>
#include <stdlib.h>
union Liczba
{
    int calkowita;
    double wymierna;
};
struct dane
{
    int tp;
    union liczba zaw;
};
struct dane wczytajdane()
{
    struct dane data;
    printf("Jezeli chcesz liczbe calkowita wpisz liczbe 0 nastepnie enter\n");
    printf("Jezeli chcesz liczbe wymierna wpisz liczbe 1 nastepnie enter\n");
    scanf("%d",&data.tp);
    if(data.tp==0)
    {
        printf("Wpisz swoja liczbe calkowita");
        scanf("%d",&data.zaw.calkowita);
    }
    else
    {
        printf("Wpisz swoja liczbe wymierna");
        scanf("%d",&data.zaw.wymierna);
    }
    return data;
}
int main()
{
    wczytajdane();
    return 0;
}
