#include <stdio.h>
#include <stdlib.h>

int sqrt(int n){
    int i=0;
    while(i*i<=n){
        i++;
    }
    return --i;
}
int main()
{
    printf("Pierwiastek z 9: %d \n",sqrt(9));
    printf("Pierwiastek z 16: %d \n",sqrt(16));

}
