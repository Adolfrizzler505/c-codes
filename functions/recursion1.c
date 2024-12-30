// Using recursion as looping

#include <stdio.h>

void show(int n)
{

    if (n != 0) // base condition
    {
        printf("CHAEWON!!\n");
        show(n - 1);
    }
}

int main()
{

    int n;

    printf("Times you want to print: ");
    scanf("%d", &n);

    show(n);

    return 0;
}