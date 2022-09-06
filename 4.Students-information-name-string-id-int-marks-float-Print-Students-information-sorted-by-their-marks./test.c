
#include <stdio.h>

struct StudentModel
{
    int id;
    float marks;
    char name[100];
};
void main()
{

    int i, j, size;
    printf("Enter the no of students : ");
    scanf("%d", &size);
    struct StudentModel students[size], temp;

    for (i = 0; i < size; i++)
    {
        printf("Enter student info of %d : \n", i + 1);
        printf("Roll : ");
        scanf("%d", &students[i].id);
        printf("Name : ");
        scanf("%s", students[i].name);
        printf("Mark: ");
        scanf("%f", &students[i].marks);
    }
    ///? sorting by marks. this loop will run size times without any condition
    for (int j = 0; j < size; j++)
    {
        for (i = size - 1; i > -1; i--) ///?
        {
            if (i == 0)
            {
                break;
            }
            if (students[i].marks > students[i - 1].marks) ///? first student marks will be compared with second student marks
            {
                temp = students[i];
                students[i] = students[i - 1];
                students[i - 1] = temp;
            }
        }
    }
    printf("Students information in sorted order by their marks :\n");
    for (i = 0; i < size; i++)
    {
        printf("\nRoll: %d, Name: %s, Markse: %.2f", students[i].id, students[i].name, students[i].marks);
    }
}
