#include <stdio.h>

int table(int n)
{

    if (n == 0)
    {
        printf("Please enter another number");
    }

    else
    {
        for (int i = 1; i <= 10; i++)
        {

            printf("%d * %d = %d\n", n, i, n * i);
        }
    }
}

int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    table(n);

    return 0;
}