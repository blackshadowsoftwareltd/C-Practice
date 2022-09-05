int max, min;
void main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d", &size);
    int arr[size], N, i;

    printf("Enter %d elements in array: ", N);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = 0;
    min = 0;

    checkMaxMin(arr, 0, size);
    // min = minimum(arr, 0, size);

    printf("Minimum element in array = %d\n", min);
    printf("Maximum element in array = %d\n", max);
}

void checkMaxMin(int arr[], int start, int len)
{
    if (start >= len)
        return;

    if (max < arr[start])
    {
        max = arr[start];
    }
    else if (min > arr[start])
    {
        min = arr[start];
    }
    checkMaxMin(arr, start + 1, len);
}
