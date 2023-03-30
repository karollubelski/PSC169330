#include <stdio.h>
#include <stdlib.h>

void foo1(unsigned int n,int *tab1,int *tab2){
    for(int i=0;i<n;i++){
        *(tab2+i)=*(tab1+i);
    }
}
void foo2(unsigned int n,int *tab1,int *tab2){
    for(int i=0;i<n;i++){
        *(tab2+i)=*(tab1+n-i-1);
    }
}
void wyswietl(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d \n", i, *(tab+i));
    }
    printf("--------\n");
}
int main()
{
    int tab1[]={-4,2,7,-3};
    int tab2[]={6,2,12,5};

    int tab3[]={-11,6,1,8};
    int tab4[]={10,-3,5,-5};


    printf("Zawartosc tab2 po zmianach:\n");
    foo2(4,tab1,tab2);
    wyswietl(4,tab2);

    printf("Zawartosc tab4 po zmianach:\n");
    foo2(4,tab3,tab4);
    wyswietl(4,tab4);
}

