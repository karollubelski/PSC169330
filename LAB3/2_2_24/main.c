#include <stdio.h>
#include <stdlib.h>

int funkcja(n){
    if(n<2){
        return 1;
    }
    else {
        return n+funkcja(n-1);
    }

}
int main()
{
    printf("Funkcja dla n=4 %d\n",funkcja(4));
    printf("Funkcja dla n=4 %d\n",funkcja(5));
}
