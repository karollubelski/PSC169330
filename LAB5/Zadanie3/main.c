#include <stdio.h>
#include <stdlib.h>
int foo(int n){
    if(n==0||n==1){
        return 1;
    }
    if(n%3==0){
        return foo(n/3);
    }
    if(n%3==1){
        return foo((n-1)/3)+1;
    }return foo(n-1)-1;
}
int main()
{
    for(int i=0;i<=10;i++){
        printf("Dla n= %d wynosi= %d\n",i,foo(i));
    }
}
