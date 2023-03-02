#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int n,m,k;
   printf("Podaj n: ");
   scanf("%u",&n);
   printf("\nPodaj m: ") ;
   scanf("%u",&m);
   printf("\nPodaj k: ") ;
   scanf("%u",&k);

   for(int i=m;i<k;i+=n){
    printf("%d  ", i);
   }



    return 0;

}
