#include <stdio.h>
#include <windows.h>

int main() {
    double pi = 1;
    float i = 2;
    long n = 0;
    scanf("%d",&n);
    while (i<n) {
        pi = ((int)i %2==0) ? (pi-(1/((i*2)-1))) : (pi+(1/((i*2)-1)));
        i = i + 1;
    }
    printf("%.10f\n", pi*4);
}