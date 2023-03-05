#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,m,temp;
   printf("Podaj n: ");
   scanf("%d",&n);
   printf("Podaj m: ") ;
   scanf("%d",&m);

   while(m){
    temp=m;
    m=n%m;
    n=temp;
   }
   printf("\n\nNWD: %d",n);



    return 0;

}
