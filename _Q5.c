    #include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter matrix order (rows and columns): ");
    scanf("%d %d", &m, &n);
    int a[m][n], b[m][n], result[m][n];

    printf("Enter Matrix A elements:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter Matrix B elements:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    printf("Resultant XOR Matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            result[i][j] = a[i][j] ^ b[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
