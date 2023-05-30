#include <stdio.h>
#include <stdlib.h>
struct trojkat
{
    int a;
    int b;
    int c;
    int pole;
    struct trojkat * next;
};
void pole(struct trojkat * lista)
{
    while(lista!=NULL)
    {
        lista->pole=lista->a*lista->b*lista->c;
        lista=lista->next;
    }
}
void poleV2(struct trojkat * lista)
{
    lista=lista->next;
    while(lista!=NULL)
    {
        lista->pole=lista->a*lista->b*lista->c;
        lista=lista->next;
    }
}
int main()
{
    struct trojkat *tr=malloc(sizeof(struct trojkat));
    tr->a=3;
    tr->b=4;
    tr->c=5;
    tr->next=malloc(sizeof(struct trojkat));
    tr->next->a=6;
    tr->next->b=7;
    tr->next->c=8;
    tr->next->next=malloc(sizeof(struct trojkat));
    tr->next->next->a=9;
    tr->next->next->b=10;
    tr->next->next->c=11;
    tr->next->next->next=NULL;
    pole(tr);
    struct trojkat *tr2=malloc(sizeof(struct trojkat));
    tr2->next=malloc(sizeof(struct trojkat));
    tr2->next->a=6;
    tr2->next->b=7;
    tr2->next->c=8;
    tr2->next->next=malloc(sizeof(struct trojkat));
    tr2->next->next->a=9;
    tr2->next->next->b=10;
    tr2->next->next->c=11;
    tr2->next->next->next=NULL;
    poleV2(tr2);
    return 0;
}
