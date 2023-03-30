#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n, int tablica1[]){
    // a)
    for(int i=0;i<n;i++){
        tablica1[i]=0;
    }
    // b)
    for(int i=0;i<n;i++){
        tablica1[i]=i;
    }
    // c)
    for(int i=0;i<n;i++){
        tablica1[i]=2*tablica1[i];
    }
    // d)
    for(int i=0;i<n;i++){
        tablica1[i]=abs(tablica1[i]);
    }
}
int main()
{
   int n=5;
   int tablica2[n];
   int tablica3[5]={1,4,1,6,7};

   for(int i=0;i<n;i++){
        printf("Element %d w tablicy: %d\n",i,tablica2[i]);
   }
   printf("-------------------------------\n");
   foo(n,tablica2);
   for(int i=0;i<n;i++){
        printf("Element %d po zmianie: %d\n",i,tablica2[i]);
   }
   printf("-------------------------------\n");
   foo(5,tablica3);
   for(int i=0;i<n;i++){
        printf("Elementy %d z tab3 po zmianie: %d\n",i,tablica3[i]);
   }

}
