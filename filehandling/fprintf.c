#include <stdio.h>

int main()
{

    int x, y, sum;
    FILE *fp = fopen("diet.txt", "a+");
    fscanf(fp, "%d %d", &x, &y);
    sum = x + y;
    fprintf(fp, "\nSum of %d and %d is %d", x, y, sum);

    return 0;
}