#include <stdio.h>

int main(void) {

    int x;
    int y;

    scanf("%d %d", &x, &y);

    printf("Sum is %d\n", x + y);
    printf("Difference is %d\n", x - y);
    printf("Product is %d\n", x * y);
    printf("Quotient is %d\n", x / y);
    printf("Remainder is %d\n", x % y);

}