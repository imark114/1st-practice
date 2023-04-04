#include <stdio.h>

int main()
{
    int num;
    printf("Enter an integer Number: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d is Positive", num);
    }
    else if (num == 0)
    {
        printf("%d is Zero", num);
    }
    else
    {
        printf("%d is Negative", num);
    }
    return 0;
}