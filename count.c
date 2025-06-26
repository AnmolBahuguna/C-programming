#include <stdio.h>
int countSpecial(char *str) {
    int count = 0;
    while (*str) {
        if (!isalnum(*str) && *str != ' ')
            count++;
        str++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Special characters = %d\n", countSpecial(str));
    return 0;
}
