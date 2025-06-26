#include <stdio.h>

int main() {
    int m, n, i, j, isUpper = 1;
    printf("Enter matrix size (rows and columns): ");
    scanf("%d %d", &m, &n);
    int mat[m][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    if (m != n) {
        printf("Not a square matrix\n");
        return 0;
    }

    for(i = 1; i < m; i++) {
        for(j = 0; j < i; j++) {
            if(mat[i][j] != 0) {
                isUpper = 0;
                break;
            }
        }
    }

    if(isUpper)
        printf("It is an upper triangular matrix.\n");
    else
        printf("It is NOT an upper triangular matrix.\n");

    return 0;
}
