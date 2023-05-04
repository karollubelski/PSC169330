#include <stdio.h>
#include <stdlib.h>

struct trojkat{
    float a;
    float b;
    float c;
};
void przypisanie(struct trojkat t1, struct trojkat *t2){
    *t2=t1;
}
int main()
{
    struct trojkat t;
    t.a=6.3;
    t.b=3.3;
    t.c=7.2;
    struct trojkat t2;
    przypisanie(t,&t2);
    printf("%f\n",t2.a);
    printf("%f\n",t2.b);
    printf("%f\n",t2.c);
}
