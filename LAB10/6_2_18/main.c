#include <stdio.h>
#include <stdlib.h>
int **tab(int n,int m)
{
	int **roz=malloc(n*sizeof(int*));
	int i;
	for(i=0;i<n;i++)
	{
		roz[i]=malloc(m*sizeof(int));
	}
	return roz;
}
void wyswietl(int n,int m,int tab[][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d   ",tab[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int **tab1=tab(4,4);
    wyswietl(4,4,**tab1);
}
