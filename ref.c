#include <stdio.h>

// Function that updates the value
void updateValue(int *ptr) {
    *ptr = *ptr + 10;  // Increase the value by 10
}

int main() {
    int num = 20;

    printf("Before update: %d\n", num);

    // Passing the address of num (call by reference)
    updateValue(&num);

    printf("After update: %d\n", num);

    return 0;
}
