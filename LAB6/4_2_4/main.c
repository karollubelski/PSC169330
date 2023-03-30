#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double foo(unsigned int n, int *tab1){
    int pom=1;
    for(int i=0;i<n;i++){
        pom*=*(tab1+i);
    }
    return sqrt(pom);
}
int main()
{
    int tab1[]={1,2,2,4};
    int tab2[]={4,4,4,8};
    double geo1=foo(4,tab1);
    double geo2=foo(4,tab2);
    printf("Srednia geometryczna elementow tab1: %lf\n",geo1);
    printf("Srednia geometryczna elementow tab2: %lf\n",geo2);

}
