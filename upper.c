#include <stdio.h>
int main() {
    int a[10][10], n, isUpper = 1;
    printf("Enter size of matrix: ");
    scanf("%d", &n);
    printf("Enter matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[i][j] != 0)
                isUpper = 0;

    printf(isUpper ? "Upper Triangular Matrix\n" : "Not Upper Triangular Matrix\n");
    return 0;
}
