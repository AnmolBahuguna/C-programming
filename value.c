#include <stdio.h>

void callByValue(int x) {
    x = x + 10;
    printf("Inside callByValue: x = %d\n", x);
}

int main() {
    int a = 5;
    callByValue(a);
    printf("After callByValue: a = %d\n", a);
    return 0;
}
