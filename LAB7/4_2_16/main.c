#include <stdio.h>
#include <stdlib.h>

void freetablica(double*tablica){
    free(tablica);
}
int main()
{
    double tab[] = {2.2, -3.4, 7.2, 8.0};
    freetablica(tab);
}
