#include <stdio.h>

void callByReference(int *x) {
    *x = *x + 10;
    printf("Inside callByReference: x = %d\n", *x);
}

int main() {
    int a = 5;
    callByReference(&a);
    printf("After callByReference: a = %d\n", a);
    return 0;
}
