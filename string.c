#include <stdio.h>
#include <string.h>

int main() {
    char a[100] = "Hello";
    char b[100] = "World";
    char c[100];
    char *p;

    // 1. strlen - length of string
    printf("Length: %lu\n", strlen(a)); // 5

    // 2. strcpy - copy b to c
    strcpy(c, b);
    printf("Copy: %s\n", c); // World

    // 3. strcat - join b to a
    strcat(a, b);
    printf("Join: %s\n", a); // HelloWorld

    // 4. strcmp - compare b and c
    if (strcmp(b, c) == 0)
        printf("Same\n");
    else
        printf("Not same\n");

    // 5. strncpy - copy 3 chars
    strncpy(c, "ABCDEF", 3);
    c[3] = '\0';
    printf("Copy 3: %s\n", c); // ABC

    // 6. strncat - join 2 chars
    strncat(c, "XY", 2);
    printf("Join 2: %s\n", c); // ABCXY

    // 7. strncmp - compare first 3
    if (strncmp("Hello", "Helium", 3) == 0)
        printf("First 3 match\n");

    // 8. strchr - first 'l'
    p = strchr("Hello", 'l');
    printf("First l: %s\n", p); // llo

    // 9. strrchr - last 'l'
    p = strrchr("Hello", 'l');
    printf("Last l: %s\n", p); // lo

    // 10. strstr - find "lo"
    p = strstr("HelloWorld", "lo");
    printf("Find 'lo': %s\n", p); // loWorld

    // 11. strtok - break by ,
    char text[] = "C,Java,Python";
    char *t = strtok(text, ",");
    while (t != NULL) {
        printf("Token: %s\n", t);
        t = strtok(NULL, ",");
    }

    return 0;
}
