#include <stdio.h>
#include <stdlib.h>


int main()
 {
   int n,m,temp=1;
   printf("Podaj n: ");
   scanf("%d",&n);
   printf("Podaj m: ") ;
   scanf("%d",&m);

   for(int i=n;i<=m;i++){
        temp*=i;
    }

    printf("Liczba: %d",temp);



    return 0;
}
