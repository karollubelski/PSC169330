#include <stdio.h>
#include <stdlib.h>

struct boki_trojkata{
    float a;
    float b;
    float c;
};
float obwod(struct boki_trojkata x){
    return x.a+x.b+x.c;
}
int main()
{
    struct boki_trojkata t;
    t.a=6.3;
    t.b=3.3;
    t.c=7.2;
    printf("%f",obwod(t));
}
