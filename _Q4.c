#include <stdio.h>
#include <string.h>

int main() {
    int n, i, found = 0;
    char names[10][20], search[20];

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter names:\n");
    for(i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    printf("Enter name to search: ");
    scanf("%s", search);

    for(i = 0; i < n; i++) {
        if(strcmp(names[i], search) == 0) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Name found in the list.\n");
    else
        printf("Name not found.\n");

    return 0;
}
