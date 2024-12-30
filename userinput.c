#include <stdio.h>

union Student {
    int rollnumber;
    char name[30];
    char branch[10];
    char section[5];
    int marks;
};

int main() {
    union Student s1;

    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollnumber);
    printf("Roll Number = %d\n", s1.rollnumber);

    printf("Enter Name: ");
    fflush(stdin); // Clear the input buffer
    gets(s1.name);
    printf("Name = %s\n", s1.name);

    printf("Enter Branch: ");
    gets(s1.branch);
    printf("Branch = %s\n", s1.branch);

    printf("Enter Section: ");
    gets(s1.section);
    printf("Section = %s\n", s1.section);

    printf("Enter Marks: ");
    scanf("%d", &s1.marks);
    printf("Marks = %d\n", s1.marks);

    return 0;
}
