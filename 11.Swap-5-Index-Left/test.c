#include <stdio.h>

void main()
{
    char str[100], result[100];
    int exchange = 5, i = 0, length;

    printf("Enter a string: ");
    fgets(str, length, stdin);
    length = strlen(str);
    for (i; str[i] != '\0'; i++)
    {
        if (exchange + i < length)
            result[i] = str[exchange + i];
        if (i - exchange >= 0)
            result[i] = str[((i + exchange) - length)];
    }
    result[length] = '\0';
    puts(result);
}
