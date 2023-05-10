#include <stdio.h>
#include <stdlib.h>
void kopiujn(char napis1[],char napis2[],int n){
    int i;
    for(i=0;i<n&&napis1[i]!='\0';i++){
        napis2[i]=napis1[i];
    }
    napis2[i]='\0';
}
void kopiujn2(wchar_t* nap1,wchar_t* nap2,int n){
    int i;
    for (i=0;i<n&&nap1[i]!=L'\0';i++){
        nap2[i]=nap1[i];
    }
    nap2[i] = L'\0';
}
int main()
{
    char napis[]="ABCDE";
    char napis2[]="Olsztynaa";
    kopiujn(napis,napis2,5);
    printf("%s %s\n",napis,napis2);
}
