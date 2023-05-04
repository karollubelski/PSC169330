#include <stdio.h>
#include <stdlib.h>

struct punkty{
    double *t;
    int w;
};
void przypisanie(struct punkty tab1[], struct punkty tab2[],int n){
    int i,j;
    for(i=0;i<n;i++){
        tab2[i].t=malloc(tab1[i].w*sizeof(double));
    }
    for(j=0;i<tab1[i].w;j++){
        tab2[i].t[j]=tab1[i].t[j];
    }
}
int main()
{

}
