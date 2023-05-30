#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next;
};
struct element *utworz()
{
    struct element*lista=malloc(sizeof(struct element));
    lista->next=NULL;
    return lista;
};
int main()
{
    utworz();
}
