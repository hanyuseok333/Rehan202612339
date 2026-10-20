#include <stdio.h>

int get_double(int a) {
    return a * 2;
}

int get_square(int b) {
    return b * b;
}

int get_sum(int a, int b) {
    return a + b;
}

int main(void) {
    int a, b;

    printf("Enter two numbers separated by a space: ");
    scanf("%d %d", &a, &b);

    printf("Double: %d\n", get_double(a));
    printf("Square: %d\n", get_square(b));
    printf("Sum: %d\n", get_sum(a, b));

    return 0;
}
