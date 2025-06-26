#include <stdio.h>

int main() {
    FILE *fp;

    // "w" - write (create/overwrite)
    fp = fopen("file.txt", "w");
    fprintf(fp, "Write mode\n");
    fclose(fp);

    // "a" - append (add at end)
    fp = fopen("file.txt", "a");
    fprintf(fp, "Append mode\n");
    fclose(fp);

    // "r" - read (file must exist)
    fp = fopen("file.txt", "r");
    char c;
    while ((c = fgetc(fp)) != EOF)
        putchar(c);
    fclose(fp);

    // "r+" - read/write (file must exist)
    fp = fopen("file.txt", "r+");
    fseek(fp, 0, SEEK_END);
    fprintf(fp, "Read/Write mode\n");
    fclose(fp);

    // "w+" - write/read (overwrite or create)
    fp = fopen("file2.txt", "w+");
    fprintf(fp, "Write/Read mode\n");
    rewind(fp);
    while ((c = fgetc(fp)) != EOF)
        putchar(c);
    fclose(fp);

    // "a+" - append/read (create if not exist)
    fp = fopen("file2.txt", "a+");
    fprintf(fp, "Append/Read mode\n");
    rewind(fp);
    while (fgets((char[]){0}, 1, fp) != NULL) {} // Just to show syntax, ignore
    fclose(fp);

    return 0;
}
