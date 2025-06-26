#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // points to arr[0]

    printf("Value at ptr: %d\n", *ptr);       // 10
    printf("Value at ptr+1: %d\n", *(ptr+1)); // 20
    ptr++;  // move to the next element
    printf("After increment, value at ptr: %d\n", *ptr); // 20

    return 0;
}
