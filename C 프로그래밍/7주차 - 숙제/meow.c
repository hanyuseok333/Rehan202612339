#include <stdio.h>
#include <math.h>

int main() {

    int i = 0;
    int v = 03;

    while (1) {
        printf("Enter a real number: ");
        scanf("%lf", &v);
        if (v < 0.0) 
            break;   // exit infinite loop
        printf("sqrt = %f\n", sqrt(v));
    }

    for (i=0; i<10; i++) {
        if (i % 3 == 0) 
            continue;  // skip multiples of 3
        printf("%d ", i);
        }


    return 0;
}