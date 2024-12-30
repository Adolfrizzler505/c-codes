#include <stdio.h>

int count(int n)
{
    if(n==0)
    return 0;

    else 
        return 1 + count(n/10);

}

int main()
{

    int n,countdigit;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = count(n);

    printf("Number of digits in number is %d", result);

    return 0;
}