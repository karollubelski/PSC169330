#include <stdio.h>
#include <stdlib.h>

void wytnijzw(char* nap1,const char* nap2){
    int i,j,k;
    int n=strlen(nap2);
    for(i=0;nap1[i]!='\0';){
        for(j=0;j<n;j++){
            if(nap1[i]==nap2[j]){
                for(k=i;nap1[k]!='\0';k++){
                    nap1[k]=nap1[k+1];
                }
                break;
            }
        }
        if (j==n){
            i++;
        }
    }
}
void wytnijzw2(wchar_t* nap1,const wchar_t* nap2){
    int i,j,k;
    int n=wcslen(nap2);
    for(i=0;nap1[i]!= L'\0';){
        for(j=0;j<n;j++){
            if(nap1[i]==nap2[j]){
                for(k=i;nap1[k]!=L'\0';k++){
                    nap1[k]=nap1[k+1];
                }
                break;
            }
        }
        if(j==n){
            i++;
        }
    }
}
int main()
{
    char napis1[]="ducati";
    char napis2[]="mercedes";
    wytnijzw(napis1,napis2);
    printf("%s\n",napis1);
}
