#include <stdio.h>
#include <stdlib.h>
int dl(char* napis){
    int i=0;
    for(i=0;napis[i]!=0;i++){

    } return i;
}
int dl2(char* napis){
    int dl=0;
    while(napis[dl]!=0){
        dl++;
    } return dl;
}
int dl3(char* napis){
    int i;
    while(napis[i]){
        i++;
    }return i;
}
int dl4(char* napis){
    int i;
    while(*(napis+i)){
        i++;
    }return i;
}
int dl5(char* napis){
    if(napis[0]==0){
        return 0;
    } return 1+dl5(++napis);
}
int dl6(char* napis){
    if(!*napis){
        return 0;
    }return 1+dl6(++napis);
}
int dl7(wchar_t* napis){
    if(!*napis){
        return 0;
    } return 1+dl7(++napis);
}
int main()
{
    char napis[]="MiastoOlsztyn";
    char napis2[]="UwueUwueUwue";
    printf("%d\n",dl("MiastoOlsztyn"));
    printf("%d\n",dl2("MiastoOlsztyn"));
    printf("%d\n",dl3("MiastoOlsztyn"));
    printf("%d\n",dl4("MiastoOlsztyn"));
    printf("%d\n",dl5("MiastoOlsztyn"));
    printf("%d\n",dl6("MiastoOlsztyn"));
    printf(L"%d\n",dl7(L"MiastoOlsztyn"));

}
