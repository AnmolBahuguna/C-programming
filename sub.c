#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[4]; // points to 50
    int *ptr2 = &arr[1]; // points to 20

    int diff = ptr1 - ptr2;
    printf("Difference between ptr1 and ptr2: %d\n", diff);  // 3 elements apart

    return 0;
}
