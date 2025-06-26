#include <stdio.h>
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n/2; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    FILE *f1 = fopen("Numbers.txt", "r");
    FILE *f2 = fopen("Prime.txt", "w");
    int num;
    while (fscanf(f1, "%d", &num) != EOF)
        if (isPrime(num)) fprintf(f2, "%d ", num);
    fclose(f1); fclose(f2);
    return 0;
}
