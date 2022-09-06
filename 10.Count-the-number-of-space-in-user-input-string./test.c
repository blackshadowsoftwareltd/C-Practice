#include <stdio.h>

void main()
{
    int i = 0, count = 0;
    char str[1000];

    printf("Enter your string : ");
    gets(str);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            count++;
        }
        i++;
    }
    printf("Number of space in the string is : %d", count);
}
