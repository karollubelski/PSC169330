#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pierwiastek(unsigned int n,unsigned int m){
    for(int i=0;i<=n;i++){
        int wynik=sqrt(i,m);
        printf("%d",wynik);
    }

}
int main()
{
    pierwiastek(9,2);
}
