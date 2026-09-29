// Remainder operator porgram
#include <stdio.h>
#define sec_per_min 60 //1 min = 60 sec

int main (void) {
    int input, minute, second;

    printf("Please enter seconds: ");
    scanf("%d", &input);

    minute = input / sec_per_min; //how many seconds
    second = input % sec_per_min;

    printf("%d seconds is %d minutes and %d seconds\n", input, minute, second);
    return 0;
}