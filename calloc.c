#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocating memory for 5 integers and initializes with 0
    ptr = (int*) calloc(5, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);  // all will be zero initially
    }

    free(ptr);
    return 0;
}
                                                                                                                                                                                                                                                                                                    