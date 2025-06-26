#include <stdio.h>

int main() {
    int m, i, j;
    printf("Enter the order of square matrices: ");
    scanf("%d", &m);
    int a[m][m], b[m][m], result[m][m];

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < m; j++)
            scanf("%d", &b[i][j]);

    printf("Resultant Matrix (A - B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            result[i][j] = a[i][j] - b[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
