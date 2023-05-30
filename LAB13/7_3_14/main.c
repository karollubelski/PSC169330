#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element * next;
};
void dodajw(struct element * lista,struct element * elem,int a)
{
    struct element * wskaznik=malloc(sizeof(struct element));
    wskaznik->i=a;
    wskaznik->next=elem->next;
    elem->next=wskaznik;
}
int main()
{
    struct element *proba=malloc(sizeof(struct element));
    proba->next=malloc(sizeof(struct element));
    proba->next->i=5;
    proba->next->next=malloc(sizeof(struct element));
    proba->next->next->i=7;
    proba->next->next->next=malloc(sizeof(struct element));
    proba->next->next->next->i=9;
    int *temp=proba->next->next->next;
    dodajw(proba,temp,12);
	return 0;
}
