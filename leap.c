#include <stdio.h>
int main()
{
    int year;
    printf("enter the year:");
    scanf("%d", &year);

    if (year % 4 == 0)
        printf("leap year:\n");

    else
        printf("not leap:\n");
    return 0;
}