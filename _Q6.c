#include <stdio.h>

void swapDiagonal(int mat[10][10], int size) {
    for(int i = 0; i < size; i++) {
        int temp = mat[i][i];
        mat[i][i] = mat[i][size - i - 1];
        mat[i][size - i - 1] = temp;
    }
}

int main() {
    int mat[10][10], n, i, j;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    swapDiagonal(mat, n);

    printf("Matrix after swapping diagonals:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
