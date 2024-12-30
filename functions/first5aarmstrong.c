#include <stdio.h>
#include <math.h>

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
    return (result==num);
}

void fivenumbers()
{

    int count = 0, num = 11;
    while (count < 5)
    {
        if (isarmstrong(num))
        {
            printf("%d is an Armstrong number.\n", num);
            count++;
        }
        num++;
    }
}

int main()
{

    fivenumbers();

    return 0;
}