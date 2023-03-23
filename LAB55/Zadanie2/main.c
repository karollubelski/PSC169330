#include <stdio.h>
#include <stdlib.h>
int x(int n){
    return n;
}
int y(int n){
    return n+n;
}
int z(int(*foo4)(int),int(*foo5)(int),int n){
    return foo4(n)+foo5(n);
}
int main()
{
    printf("%d\n",z(x,y,2));
    printf("%d\n",z(x,y,5));

}
