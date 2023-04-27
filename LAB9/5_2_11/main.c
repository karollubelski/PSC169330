#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void wytnijzw(char* napis1, char* napis2){
    int dl1=strlen(napis1);
    int dl2=strlen(napis2);
    int pom=0;
    for(int i=0;i<dl1;i++){
        int j;
        for(j=0;j<dl2;j++){
            if(napis1[i]==napis2[i]){
                break;
            }
        }
        if(j==dl2){
            napis1[pom++]=napis1[i];
        }
    }
    napis1[pom]=0;
}
void wytnijzw2(wchar_t* napis1, wchar_t* napis2){
    int dl1=wcslen(napis1);
    int dl2=wcslen(napis2);
    int pom=0;
    for(int i=0;i<dl1;i++){
        int j;
        for(j=0;j<dl2;j++){
            if(napis1[i]==napis2[i]){
                break;
            }
        }
        if(j==dl2){
            napis1[pom++]=napis1[i];
        }
    }
    napis1[pom]=0;
}
int main()
{
    char napis1[]="MercedesAmgGtr";
    char napis2[]="mercedesamggtr"; //????????????
    wytnijzw(napis1,napis2);
    printf("%s\n",napis1);
}
