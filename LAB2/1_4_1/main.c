#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int n,m;
   printf("Podaj n: ");
   scanf("%u",&n);
   printf("\nPodaj m: ") ;
   scanf("%u",&m);

   for(int i=n;i<m;i+=n){
    printf("%d  ", i);
   }



    return 0;

}
