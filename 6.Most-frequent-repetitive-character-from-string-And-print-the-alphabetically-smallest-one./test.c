#include <stdio.h>
#include <string.h>

void main()
{
    printf("Enter a string : ");
    char str[100];
    int i, x, temp = 0, counter[26];
    for (i = 0; i < 26; i++)
    {
        counter[i] = 0;
    }
    gets(str);
    printf("You entered : %s\n", str);
    for (int i = 0; i < strlen(str); i++)
    {
        temp = str[i];
        counter[temp - 97] = counter[temp - 97] + 1;
    }
    temp = 0;
    for (i = 0; i < 26; i++)
    {
        if (counter[i] > temp)
        {
            x = i;
            temp = counter[i];
        }
    }
    char c = x + 97;
    printf("%c existing %d time", c, temp);
}
