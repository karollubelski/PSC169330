#include <stdio.h>

double pierwiastek(int n) {
    double x=n;
    double y=(x+n/x)/2;
    while (y!=x){
        x=y;
        y=(x+n/x)/2;
    }
    return y;
}

int main() {

    printf("Pierwiastek z %d to %.2lf",pierwiastek(5));

    return 0;
}
