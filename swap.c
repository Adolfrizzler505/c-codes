// swapping of two numbers

#include <stdio.h>

void swap(int *a, int *b)
{

    int z;

    z = *a;

    *a = *b;

    *b = z;
}

int main()
{
    int a, b, z;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);       

    printf("After swapping a = %d and b = %d", a, b);

    return 0;
}