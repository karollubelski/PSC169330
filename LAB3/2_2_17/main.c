#include <stdio.h>
#include <stdlib.h>

int liczba_wywolan=0;
void funkcja(){
    liczba_wywolan++;
    printf("Wywolanie nr %d\n",liczba_wywolan);
}
int main()
{
   funkcja();
   funkcja();
   funkcja();
   funkcja();
   funkcja();
}
