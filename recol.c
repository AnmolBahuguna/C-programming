#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    ptr = (int*) malloc(3 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign some values
    for (int i = 0; i < 3; i++) {
        ptr[i] = i + 1;
    }

    // Increase size to 5 integers
    ptr = (int*) realloc(ptr, 5 * sizeof(int));
    if (ptr == NULL) {
        printf("Re-allocation failed\n");
        return 1;
    }

    // Assign values to new memory
    ptr[3] = 4;
    ptr[4] = 5;

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    return 0;
}
