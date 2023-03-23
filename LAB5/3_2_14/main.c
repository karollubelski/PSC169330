#include <stdio.h>
#include <stdlib.h>

bool f_compare(int(*func1)(int),int(*func2)(int),unsigned int n){
    for(int i=0;i<=n;i++){
        if(func1(i)!=func2(i)){
            return false;
        }return true;
    }
double sqrt(int x){
    return x*x;
}
double cube(int x){
    return x*x*x;
}

int main(){
   int wynik3=f_compare(&sqrt,&cube,5);
   int wynik4=f_compare(&sqrt,&sqrt,5);

}
