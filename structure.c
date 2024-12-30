
#include <stdio.h>
#include<string.h>

struct student
{
    int rollnumber;
    int marks;
    char name[30], branch[10], section[5];
};

int main()
{

    // struct student s1 = {
    //     1001, 420, "Dharampal", "CSE", "A3" // write the info in the same order it was initialized
    // };

    // individual initilization

    struct student s1;
    s1.rollnumber = 23;
    strcpy(s1.name, "Dharampal");
    strcpy(s1.branch, "CSE");
    strcpy(s1.section, "A3");
    s1.marks = 423;

    printf("Roll Number: %d\nMarks: %d\nName: %s\nBranch: %s\nSection: %s\n", s1.rollnumber, s1.marks, s1.name, s1.branch, s1.section);

    return 0;
}

// sum of size of memebers of the structure = size of the memory allocated