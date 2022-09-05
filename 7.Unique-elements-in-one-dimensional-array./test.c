#include <stdio.h>

void main()
{
    int size, i, j, flag;
    printf("Enter size of an array : ");
    scanf("%d", &size);
    int arr[size];

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Unique Elements are : ");
    for (i = 0; i < size; i++)
    {
        flag = 0;
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}