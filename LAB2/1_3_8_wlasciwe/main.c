#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a,b,h,pole;
   int wybor;
   printf("Obliczanie pola dla: \n");
   printf("1. Trojkata \n");
   printf("2. Prostokata \n");
   printf("3. Kwadratu \n");
   scanf("%d",&wybor);

   switch(wybor){
        case 1: printf("Podaj dlugosc boku i wysokosc trojkata: \n");
                scanf("%lf%lf",&a,&h);
                pole=a*h/2;
                break;
        case 2: printf("Podaj dlugosci bokow prostokata:\n");
                scanf("%lf_%lf",&a,&b);
                pole=a*b;
                break;
        case 3: printf("Podaj dlugosc boku kwadratu:\n");
                scanf("%lf",&a);
                pole=a*a;
   }
   printf("Pole wybranej przez Ciebie figury wynosi: %.2lf ",pole);


   return 0;
}
