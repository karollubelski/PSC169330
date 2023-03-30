#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int foo(unsigned int n, int tab1[]){
    int suma=1;
    int srednia;
    for(int i=0;i<n;i++){
        suma*=tab1[i];
    }
    return sqrt(suma);
}
int main()
{
    int tab2[]={1,2,2,4};
    int tab3[]={4,4,4,8};
    printf("Srednia geometryczna elementow tab2: %d\n",foo(4,tab2));
    printf("Srednia geometryczna elementow tab3: %d\n",foo(4,tab3));

}
