#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool f_compare(double(*foo1)(int),double(*foo2)(int),unsigned int n){
    for(int i=0;i<=n;i++){
        if(foo1(i)!=foo2(i)){
            return false;
        }
    }
    return true;
}
double sqrt(int x){
    return x*x;
}
double cube(int x){
    return x*x*x;
}
int main()
{
    int wynik1=f_compare(&sqrt,&sqrt,5);
    printf("Rownosc funkcji sqrt oraz sqrt od 0 do 5: %d\n",wynik1);
    int wynik2=f_compare(&sqrt,&cube,3);
    printf("Rownosc funkcji sqrt oraz cube od 0 do 3: %d\n",wynik2);

}
