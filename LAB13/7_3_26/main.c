#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element * next;
};
struct element * min(struct element * lista)
{
    struct element * min=lista;
    while(lista!=NULL)
    {
        if(lista->i<min->i)
        {
            min=lista;
        }
        lista=lista->next;
    }
    return min;
}
struct element * mini2(struct element * lista)
{
    struct element * min=lista->next;
    while(lista!=NULL)
    {
        if(lista->i<min->i)
        {
            min=lista;
        }
        lista=lista->next;
    }
    return min;
}
int main()
{
    struct element *proba=malloc(sizeof(struct element));
    proba->i=5;
    proba->next=malloc(sizeof(struct element));
    proba->next->i=7;
    proba->next->next=malloc(sizeof(struct element));
    proba->next->next->i=8;
    proba->next->next->next=NULL;
    min(proba);
    struct element *proba2=malloc(sizeof(struct element));
    proba2->next=malloc(sizeof(struct element));
    proba2->next->i=7;
    proba2->next->next=malloc(sizeof(struct element));
    proba2->next->next->i=8;
    proba2->next->next->next=NULL;
    mini2(proba2);
    return 0;
}
