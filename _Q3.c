#include <stdio.h>

int main() {
    int m, i, j, sum = 0;
    printf("Enter the order of square matrix: ");
    scanf("%d", &m);
    int mat[m][m];

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            if(i == 0 || i == m-1 || j == 0 || j == m-1)
                sum += mat[i][j];
        }
    }

    printf("Sum of peripheral elements = %d\n", sum);
    return 0;
}
