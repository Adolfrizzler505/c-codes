// function with no argument but return value

#include <stdio.h>

int converTobinary(void)
{

    int num, place = 1,binary=0;
    printf("Enter Number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        int rem = num % 2;
        binary = rem*place + binary;
        num = num / 2;
        place = place*10;
    }

    return binary;
}

int main()
{

    int bin = converTobinary();

    printf("%d", bin);

    return 0;
}