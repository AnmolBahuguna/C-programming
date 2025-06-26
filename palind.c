#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *str) {
    int l = 0, r = strlen(str) - 1;
    while (l < r) {
        if (tolower(str[l]) != tolower(str[r]))
            return 0;
        l++; r--;
    }
    return 1;
}

int main() {
    char s[100];
    printf("Enter a string: ");
    gets(s);
    if (isPalindrome(s))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
