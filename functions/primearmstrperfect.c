#include <stdio.h>
#include <math.h>

int prime(int num)
{
    int i = 2, flag = 0;

    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0)
        printf("Number is prime.\n");
    else
        printf("Number is not prime.");

    // return num / 2, num % i;
}

int isarmstrong(int num)
{

    int og = num, remainder, n = 0, result = 0;

    while (og != 0)
    {
        og /= 10;
        n++;
    }

    og = num;

    while (og != 0)
    {
        remainder = og % 10;
        result += pow(remainder, n);
        og /= 10;
    }
    if (result == num)
    {
        printf("It is an armstrong number.");
    }
    else
    {
        printf("It is not an armstrong number.");
    }
}

int main()
{

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

     prime(num);
    printf("\n");
    isarmstrong(num);

    return 0;
}