#include <stdio.h>

int main (void) {
    int a, b;
    char op;
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf ("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '+') {
        printf("%d + %d = %d\n", a, b, a + b);
    } else if (op == '-') {
        printf("%d - %d = %d\n", a, b, a - b);
    } else if (op == '*') {
        printf("%d * %d = %d\n", a, b, a * b);
    } else if (op == '/') {
        if (b != 0) {
            printf("%d / %d = %.2f\n", a, b, (float)a / b);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
    
}