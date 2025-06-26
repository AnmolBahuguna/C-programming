#include <stdio.h>

int main() {
    int arr[] = {100, 200, 300, 400, 500};
    int *ptr = arr;  // Points to arr[0]

    printf("Pointer initially points to: %d\n", *ptr);  // Output: 100

    ptr++;  // Move to arr[1]
    printf("After ptr++: %d\n", *ptr);  // Output: 200

    ptr++;  // Move to arr[2]
    printf("After another ptr++: %d\n", *ptr);  // Output: 300

    ptr--;  // Move back to arr[1]
    printf("After ptr--: %d\n", *ptr);  // Output: 200

    return 0;
}
