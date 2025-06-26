#include <stdio.h>

int main() {
    char str[] = "Pointer";
    char *ptr = str;

    printf("Characters in the string:\n");
    for (int i = 0; *(ptr + i) != '\0'; i++) {
        printf("%c ", *(ptr + i));  // pointer with index
    }

    return 0;
}
 