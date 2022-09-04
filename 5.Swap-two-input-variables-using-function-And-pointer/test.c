#include <stdio.h>

void main()
{
    printf("Enter two numbers : ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Before swapping : a : %d, b : %d\n", a, b);

    swapTwoNum(&a, &b);
    printf("After swapping : a : %d, b : %d", a, b);
}
void swapTwoNum(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}