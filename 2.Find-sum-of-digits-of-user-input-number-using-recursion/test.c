#include <stdio.h>

int sum(int a);

void main()
{
    int num, result;

    printf("Enter a number : ");
    scanf("%d", &num);

    result = sum(num);

    printf("Sum of digits in %d is %d\n", num, result);
}

int sum(int num)
{
    if (num == 0)
        return 0;

    return (num % 10 + sum(num / 10));
}