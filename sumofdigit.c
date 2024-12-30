#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;

    else
        return n % 10 + sum(n / 10);
}

int main()
{

    int n;

    printf("Enter  a number: ");
    scanf("%d", &n);

    int result = sum(n);

    printf("Sum of digit is %d", result);

    return 0;
}