#include <stdio.h>
int main()
{
    int num;
    printf("ENTER THE NUMBER:");
    scanf("%d", &num);

    if (num < 10)
    {
        printf("single digit number\n");
    }

    else if (num < 100)
    {
        printf("double digit number\n");
    }

    else if (num < 1000)
    {
        printf("three  digit number\n");
    }

    else if ("num<10000")
    {
        printf("multi digit number\n");
    }
    return 0;
}