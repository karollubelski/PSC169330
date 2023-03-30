#include <stdio.h>
#include <stdlib.h>
void zad4a(unsigned int n, int *tab){
    for(int i=0;i<n;i++){
        *(tab+i)=0;
    }
}
void zad4b(unsigned int n, int *tab){
    for(int i=0;i<n;i++){
        *(tab+i)=i;
    }
}
void zad4c(unsigned int n, int *tab){
    for(int i=0;i<n;i++){
        *(tab+i)=*(tab+i)*2;
    }
}
void zad4d(unsigned int n, int *tab){
    for(int i=0;i<n;i++){
        *(tab+i)=abs(*(tab+i));
    }
}
void wyswietl(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n", i, tab[i]);
    }
    printf("--------\n");
}

int main()
{
    int tab1[]={2,-5,3,7,10};
    int tab2[]={3,-4,12,6};
    wyswietl(5,tab1);

    //1
    zad4b(5,tab1);
    wyswietl(5,tab1);
    //2
    zad4c(4,tab2);
    wyswietl(4,tab2);
    //3
    zad4d(4,tab2);
    wyswietl(4,tab2);





}
