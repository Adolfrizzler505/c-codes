#include <stdio.h>

void show(int n)
{

    if (n != 0)
    {

        show(n - 1);
        printf("%d\n", n);
    }
}

int main()
{

    int n;

    printf("Numbers: ");
    scanf("%d", &n);

    show(n);

    return 0;
}

//WAP to find the factorial of a given number using recursion
//Wap to print fibonacci series using recursion
//WAP to count number of digits in  a number 
// Wap to perform the sum of the digits of the given number
// WAP to print the table of given number
// WAP to 