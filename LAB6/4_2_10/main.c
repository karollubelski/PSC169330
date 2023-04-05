#include <stdio.h>
#include <stdlib.h>

int fooA(unsigned int n, int tab1[]){
    int max=tab1[0];
    for(int i=0;i<n;i++){
        if(tab1[i]>max){
            max=tab1[i];
        }
    }return max;

}
int fooB(unsigned int n, int tab1[]){
    int min=tab1[0];
    for(int i=0;i<n;i++){
        if(tab1[i]<min){
            min=tab1[i];
        }
    }return min;

}
int fooC(int n, int tab1[]) {
    int index=0;
    for(int i=1;i<n;i++) {
        if (tab1[i]>tab1[index]) {
            index=i;
        }
    }return index;
}
int fooD(int n,int tab1[]) {
    int index = 0;
    for (int i = 1; i < n; i++) {
        if (tab1[i]<tab1[index]) {
            index = i;
        }
    }return index;
}
int fooE(unsigned int n, int tab1[]){
    int max=tab1[0];
    for(int i=0;i<n;i++){
        if(tab1[i]>max){
            max=abs(tab1[i]);
        }
    }return max;

}
int fooF(int n,int tab1[]) {
    int index=0;
    for(int i=1;i<n;i++) {
        if (abs(tab1[i])>tab1[index]) {
            index=i;
        }
    }return index;
}
int main()
{
    int tab1[]={1,2,3,4};
    int tab2[]={1,1,1,-11,-2};
    int tab3[]={2,-2,2,-21,-7};
    printf("Najwieksza wartosc z tab1= %d \n",fooA(4,tab1));
    printf("Najmniejsza wartosc z tab2= %d \n",fooB(4,tab2));
    printf("Indeks najwiekszej wartosci z tab2= %d \n",fooC(5,tab2));
    printf("Indeks najmniejszej wartosci z tab3= %d \n",fooD(5,tab3));
    printf("Najwiekszej wartosc bezwzglednej z tab3= %d \n",fooE(5,tab3));
    printf("Indeks najwiekszej wartosc bezwzglednej z tab3= %d \n",fooF(5,tab3));



}
