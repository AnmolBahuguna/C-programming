#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
        printf("vowel:");
        break;

    case 'e':
        printf("vowel:");
        break;

    case 'i':
        printf("vowel:");
        break;

    case 'o':
        printf("vowel:");
        break;

    case 'u':
        printf("vowel:");
        break;

    default:
        printf("constants:");

    printf("the charater is%d\n",ch);
    }
    return 0;
}