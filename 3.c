// WAP to store the information of student marks using structure and find total marks of a student

#include <stdio.h>
#include <string.h>

struct student
{
    char name[30];
    int rollnumber;
    int marks[5];
    int totalmarks;
};

int main()
{

    struct student s1;
    s1.totalmarks = 0;

    printf("Enter Name: ");
    gets(s1.name);

    fflush(stdin);

    printf("Enter rollnumber: ");
    scanf("%d", &s1.rollnumber);

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of %d subject: ", i + 1);
        scanf("%d", &s1.marks[i]);
        s1.totalmarks += s1.marks[i];
    }

    printf("\n");

    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.rollnumber);
    printf("Total Marks: %d", s1.totalmarks);

    return 0;
}