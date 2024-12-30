//Simple calculator

#include <stdio.h>

int sum(int a, int b)
{

    printf("The sum of the numbers is %d", a + b);
    return a + b;
}
int sub(int a, int b)
{

    printf("The difference of the numbers is %d", a - b);
    return a - b;
}
int product(int a, int b)
{

    printf("The product of the numbers is %d", a * b);
    return a * b;
}
int division(int a, int b)
{

    printf("The division of the numbers is %d", a / b);
    return a / b;
}

int main()
{

    int a, b;
    char operator;

    printf("Enter an operator (+,-,*,/): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (operator)
    {
    case '+':
        sum(a, b);
        break;

    case '-':
        sub(a, b);
        break;

    case '*':
        product(a, b);
        break;

    case '/':

        if (b == 0)
        {
            printf("Not defined");
        }

        else
            division(a, b);
        break;

    default:
        printf("Enter a valid operator.");
    }

    return 0;
}