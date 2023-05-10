#include <stdio.h>
#include <stdlib.h>

int** foo(int n){
    int** tab=malloc(n*sizeof(int*));
    int i,j;
    for (i=0;i<n;i++){
        tab[i]=malloc((i+1)*sizeof(int));
        for (j=0;j<i+1;j++){
            tab[i][j]=0;
        }
    }
    return tab;
}

int main(){
    int** tablica = foo(4);
    tablica[0][0] = 0;
    tablica[1][0] = -2;
    tablica[3][2] = 7;
    int i,j;
    for (i=0;i<4;i++) {
        for (j=0;j<i+1;j++) {
            printf("[%d %d]=%d,",i,j,tablica[i][j]);
            printf("%p\n",&tablica[i][j]);
        }
    }
}
