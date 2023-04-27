#include <stdio.h>
#include <stdlib.h>

char* godzina(int godz, int min, int sek){
    static char napis[9];
    snprintf(napis,sizeof(napis),"%02d:%02d:%02d",godz, min, sek);
    return napis;
}
wchar_t* godzina2(int godz, int min, int sek){
    static wchar_t napis[9];
    swprintf(napis,sizeof(napis),L"%02d:%02d:%02d",godz, min, sek);
    return napis;
}
int main()
{
    char* napis=godzina(15,55,51);
    printf("%s\n",napis);

    wchar_t* napis2 = godzina2(21,13,21);
    wprintf(L"%ls\n",napis2);

}
