#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element * next;
};
struct element * doklej(struct element * lista1,struct element * lista2)
{
    struct element * temp;
    if(lista1!=NULL)
    {
        return lista2;
    }
    temp=lista1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=lista2;
    return lista1;
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
    struct element *proba2=malloc(sizeof(struct element));
    proba2->i=12;
    proba2->next=malloc(sizeof(struct element));
    proba2->next->i=15;
    proba2->next->next=malloc(sizeof(struct element));
    proba2->next->next->i=18;
    proba2->next->next->next=NULL;
    doklej(proba,proba2);
    return 0;
}
