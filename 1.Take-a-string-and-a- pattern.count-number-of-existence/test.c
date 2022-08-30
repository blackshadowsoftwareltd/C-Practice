#include <string.h>
#include <stdio.h>

void main()
{
    ///? init
    char str[100], sub[100];
    int strLength = 0, subLength = 0, count = 0;

    ///? input
    printf("Enter a string : ");
    scanf("%s", str);
    printf("Enter a substring : ");
    scanf("%s", sub);

    ///? length
    strLength = strlen(str);
    subLength = strlen(sub);

    ///?
    for (int i = 0; i < strLength; i++)
    {
        if (str[i] == sub[0]) //? if str.first == sub.first
        {
            int flag = 1;
            for (int j = 1; j < subLength; j++)
            {
                if (str[i + j] == sub[j]) //? str.next == sub.next
                {
                    flag++;
                }
                else
                    break;
            }
            if (flag == subLength) //? flag ==sub len ? matches
            {
                count++;
            }
        }
    }
    printf("Total : %d\n", count);
}
