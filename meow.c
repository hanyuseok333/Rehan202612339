#include <stdio.h>

int main() {

    int i = 3;
    int *p = &i;

    printf("Value of i: %d\n", i);
    printf("Address of i: %p\n", &i);
    printf("Value of p: %p\n", p);
    printf("Value pointed by p: %d\n", *p);

    char *pc;
    short *ps;
    int *pi;


    float *pf;
    double *pd;

    printf("pc=%p, pc+1=%p\n", pc, pc + 1);
    printf("ps=%p, ps+1=%p\n", ps, ps + 1);
    printf("pi=%p, pi+1=%p\n", pi, pi + 1);
    printf("pf=%p, pf+1=%p\n", pf, pf + 1);
    printf("pd=%p, pd+1=%p\n", pd, pd + 1);

    return 0;
}