#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("myfile.txt", "r"); // open file in read mode

    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }
    
    printf("Reading from file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch); // print each character
    }
    
    fclose(fp);
    return 0;
}
    