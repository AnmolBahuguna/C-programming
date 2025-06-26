#include <stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 == 0)
        printf("number is divisble by 5 & 11", num);

    else
        printf("number is not divisble by 5 & 11", num);
    return 0;
}