#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next;
};
struct element * dodajw(struct element *lista,struct element *elem,int a)
{
    struct element * wskaznik=malloc(sizeof(struct element));
    wskaznik->i=a;

    if(elem==NULL)
    {
        wskaznik->next=lista;
        lista=wskaznik;
    }
    else
    {
        wskaznik->next=elem->next;
        elem->next=wskaznik;
    }
    return lista;
};
int main()
{
    struct element *wskaznik=malloc(sizeof(struct element));
    wskaznik->i=5;
    wskaznik->next=malloc(sizeof(struct element));
    wskaznik->i=7;
    wskaznik->next->next=malloc(sizeof(struct element));
    wskaznik->next->next->i=8;
    wskaznik->next->next->next=NULL;
    dodajw(wskaznik,NULL,9);
}
