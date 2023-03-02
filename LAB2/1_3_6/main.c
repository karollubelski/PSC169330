#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1,b1,c1,a2,b2,c2;
    int Wx,Wy,W,x,y;
    printf("a1: ");
    scanf("%d", &a1);
    printf("b1: ");
    scanf("%d", &b1);
    printf("c1: ");
    scanf("%d", &c1);
    printf("a2: ");
    scanf("%d", &a2);
    printf("b2: ");
    scanf("%d", &b2);
    printf("c2: ");
    scanf("%d", &c2);

    Wx = c1 * b2 - b1 * c2;
    Wy = a1 * c2 - c1 * a2;
    W = a1 * b2 - b1 * a2;
    x= Wx/W;
    y= Wy/W;

    if(W!=0){
        printf("x= %d% \n", x);
        printf("y= %d% \n", y);
    }
    if(Wx==0 && Wy==0){
        printf("\nWiele rozwiazan");
    }else{
    printf("\nUklad sprzeczny");
    }

    return 0;
}
