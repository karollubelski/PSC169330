#include <stdio.h>
#include <stdlib.h>

int fooA(unsigned int n, int tab1[],int tab2[],int tab3[]){
    for(int i=0;i<n;i++){
        tab3[i]=tab1[i]+tab2[i];
    }

}
int fooB(unsigned int n, int tab1[],int tab2[],int tab3[]){
    for(int i=0;i<n;i++){
            if(tab1[i]>tab2[i]){
                tab3[i]=tab1[i];
            }else{
                tab3[i]=tab2[i];
            }
    }
}
int fooC(unsigned int n, int tab1[],int tab2[],int tab3[]){
    for(int i=0;i<n;i++){
        tab2[i]=tab1[i];
    }
    for(int i=0;i<n;i++){
        tab3[i]=tab2[i];
    }
    for(int i=0;i<n;i++){
        tab1[i]=tab3[i];
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
    int tab2[]={4,3,2,1};
    int tab3[]={2,2,2,2};
    printf("Tab3 po zmianach: \n");
    fooB(4,tab1,tab2,tab3);
    wyswietl(4,tab3);

}
