#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int n;
   printf("Podaj n: ");
   scanf("%u",&n);

   int suma;
   for(int i=0;i<=n;i++){
        suma+=i*i;
   }
   printf("Suma kwadratow liczb od 0 do n wynosi: %d", suma);




    return 0;

}
