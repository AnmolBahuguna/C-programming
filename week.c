#include <stdio.h>
int main()
{
    int week;
    printf("enter the week:");
    scanf("%d", &week);

    if (week == 1)
    {
        printf("monday\n");
    }

    else if (week == 2)
    {
        printf("tuesday\n");
    }

    else if (week == 3)
    {
        printf("wednesday\n");
    }

    else if (week == 4)
    {
        printf("thrusday\n");
    }

    else if (week == 5)
    {
        printf("friday\n");
    }

    else if (week == 6)
    {
        printf("saturday");
    }

    else if (week == 7)
    {
        printf("sunday");
    }
    else if (week > 7)
    {
        printf("invalid week");
    }
    return 0;
}