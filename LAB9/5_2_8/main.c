#include <stdio.h>
#include <stdlib.h>

void zamiana(char* napis) {
    for(int i=0;napis[i]!=0;i++){
        if((napis[i]>='a')&&(napis[i]<='z')){
            napis[i]-=('a'-'A');
        }
    }
}
void zamiana2(wchar_t *napis2){
    for(int i=0;napis2[i]!=L'\0';i++){
       if((napis2[i]>=L'a')&&(napis2[i]<=L'z')){
            napis2[i]-=(L'a'-L'A');
        }
    }
}
int main()
{
    char napis[]= "abcdefgtr";
    wchar_t napis2[]=L"aaabbccaaa";
    zamiana(napis);
    zamiana2(napis2);
    printf("%s\n",napis);
    printf("%ls",napis2);

}
