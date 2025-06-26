#include <stdio.h>
int main() {
    FILE *fp = fopen("test.txt", "r");
    char ch;
    int lines = 0, words = 0, chars = 0;
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (ch == ' ' || ch == '\n') words++;
    }
    fclose(fp);
    printf("Lines: %d\nWords: %d\nCharacters: %d\n", lines, words, chars);
    return 0;
}
