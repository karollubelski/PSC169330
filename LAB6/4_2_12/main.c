#include <stdio.h>
#include <stdlib.h>

int fooA(unsigned int n, int tab[]){
    for(int i=0;i<n/2;i++){
        int temp=tab[i];
        tab[i]=tab[n-1-i];
        tab[n-1-i]=temp;
    }
}
int fooB(unsigned int n, int tab[]){
    int temp=tab[0];
    for(int i=0;i<n;i++){
        tab[i]=tab[i+1];
    }tab[n-1]=temp;
}
int fooC(unsigned int n, int tab[]){
    int temp=tab[n-1];
    for(int i=n;i>0;i--){
        tab[i]=tab[i-1];
    }tab[0]=temp;
}
void fooD(unsigned int n,int tab[]){
    int j,max;
    for(int i=0;i<n- 1;i++){
        max=i;
        for(j=i+1;j<n;j++){
            if(tab[j]<tab[max]){
                max=j;
            }
        }
        if(max!=i){
            int temp=tab[i];
            tab[i]=tab[max];
            tab[max]=temp;
        }
    }
}
void fooE(unsigned int n,int tab[]){
    int j,max;
    for(int i=0;i<n- 1;i++){
        max=i;
        for(j=i+1;j<n;j++){
            if(tab[j]>tab[max]){
                max=j;
            }
        }
        if(max!=i){
            int temp=tab[i];
            tab[i]=tab[max];
            tab[max]=temp;
        }
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
    int tab1[]={1,2,3,4};
    int tab2[]={1,1,1,-11,-2};
    int tab3[]={2,-2,2,-21,-7};
    fooE(5,tab3);
    wyswietl(5,tab3);
}
