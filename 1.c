#include <stdio.h>

int main()
{

    int x = 23;
    int *allu = &x;
    *allu = 183; // changing the variable's value

    printf("%d\n", *&x); // usinf * before & gives the value of the variable (indirect way)
    printf("%p\n", allu);
    printf("%d", *allu);

    return 0;
}