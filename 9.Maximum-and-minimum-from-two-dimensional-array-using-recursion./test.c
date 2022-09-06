#include <stdio.h>
int max, min, i, j, r = 0, c = 0;

void main()
{

    printf("Enter size of array : ");
    scanf("%d %d", &r, &c);

    printf("you Entered : %d %d\n", r, c);
    int arr[r][c];
    printf("Enter elements in array : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    max = 0;
    min = 0;
    r = 0;
    c = 0;
    checkMaxMin(arr);

    // printf("Minimum element in array = %d\n", min);
    // printf("Maximum element in array = %d\n", max);
}
void checkMaxMin(int arr[r][c])
{
    if (r < 0 || c < 0)
    {
        return;
    }
    printf("---------%d", arr[r][c]);
    r--;
    checkMaxMin(arr);
}
