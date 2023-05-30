#include <stdio.h>
#include <stdlib.h>
struct element
{
    int  i;
    struct element * next;
};
void usunw(struct element *lista,struct element *elem)
{
    struct element *wskaznik;
    while((lista->next!=NULL)&&(lista->next!=elem))
    {
        lista=lista->next;
    }
    wskaznik=lista->next;
    lista->next=wskaznik->next;
    free(wskaznik);
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
    usunw(proba,temp);
	return 0;
}
