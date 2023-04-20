#include <stdio.h>
#include <stdlib.h>
void kopiujn(char napis1[],char napis2[],int n){
    int i;
    for(i=0;napis1[i]!=0;i++){
        napis2[i]=napis1[i];
    }
    napis2[i]=0;
}
int main()
{
    char napis[]="ABCDE";
    char napis2[]="Olsztynaa";
    kopiujn(napis,napis2,3);
    printf("%s %s\n",napis,napis2);
}
