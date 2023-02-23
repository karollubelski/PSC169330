#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,z;
   printf("Podaj trzy liczby calkowite:\n ");
   scanf("%d",&x);
   scanf("%d",&y);
   scanf("%d",&z);
   printf("Srednia arytmetyczna tych liczb to: %d\n",(x+y+z)/3);
   return 0;
}
