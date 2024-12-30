#include <stdio.h>
#include <string.h>

union student
{
    int rollnumber;
    int marks;
    char name[30], branch[10], section[5];
};

int main()
{

    union student s1;

    printf("Enter Name: ");
     fflush(stdin);  //FLUSH INORDER TO REMOVE BUFFERING
    gets(s1.name);

   

    printf("Enter RollNumber: ");
    scanf("%d", &s1.rollnumber);
    fflush(stdin);

    printf("Enter Branch: ");
    gets(s1.branch);
    fflush(stdin);

    printf("Enter Section: ");
    gets(s1.section);
    fflush(stdin);

    printf("Enter marks: ");
    scanf("%d", &s1.marks);

    printf("\nRoll Number: %d\nMarks: %d\nName: %s\nBranch: %s\nSection: %s\n", s1.rollnumber, s1.marks, s1.name, s1.branch, s1.section);

    

    return 0;
}