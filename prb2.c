#include <stdio.h>

int main()
{
    int a, b, sum, sub, mlti;
    printf("Enter two integer value: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    sub = a - b;
    mlti = a * b;
    float divi = a * 1.0 / b;
    printf("summation = %d\nsubtraction = %d\nmultiplication = %d\ndivision = %.2f", sum, sub, mlti, divi);

    return 0;
}