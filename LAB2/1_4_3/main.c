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

   for(int i=0;i<k;i++){
    if((n*i>m)&&(n*i<k)){
        printf("%d ", n*i);
    }
   }


    return 0;

}
