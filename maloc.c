#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocating memory for 5 integers
    ptr = (int*) malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assigning values
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);  // free the allocated memory
    return 0;
}
