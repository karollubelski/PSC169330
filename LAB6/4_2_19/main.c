#include <stdio.h>
#include <stdlib.h>

int* foo(unsigned int n, int tab1[]){
    int niezerowe;
    for(int i=0;i<n;i++){
        if(tab1[i]!=0){
            niezerowe++;
        }
    }
    int*tab2=(int*)malloc(niezerowe*sizeof(int));
    int j=0;
    for(int i=0;i<n;i++){
        if(tab1[i]!=0){
            tab2[j]=tab1[i];
            j++;
        }
    }
    return tab2;
}
void wyswietl(unsigned int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("[i]=%d\n",tab[i]);
    }
}
int main()
{
    int n=6;
    int tab1[]={0,1,5,0,7,0};
    int*tab2=foo(n,tab1);
    int tab3[]={0,2,1,0,0,3};
    int*tab4=foo(n,tab3);
    printf("Tab2:\n");
    wyswietl(3,tab2);
    printf("Tab4:\n");
    wyswietl(3,tab4);
}
