#include <stdio.h>

int main() {
    
    int num1, num2, num3;
    int i;
    
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num1, i, num1 * i);
    }
    printf("\n");

    i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", num2, i, num2 * i);
        i++;
    }
    printf("\n");

    i = 1;
    do {
        printf("%d x %d = %d\n", num3, i, num3 * i);
        i++;
    } while (i <= 10);
    printf("\n");

    int x, y = 0;
    printf("Enter the number of rows for the triangle: ");
    int n;
    scanf("%d", &n);
    for (y = 0; y < n; y++) {
        for (x = 0; x < n - y - 1; x++) {
            printf(" ");
        }

        for (x = 0; x < 2 * y + 1; x++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}