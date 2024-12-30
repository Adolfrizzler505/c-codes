

#include<stdio.h>
int main()
{
int i,temp=0;
float arr[5];

printf("Please enter five numbers:\n ");

for (i = 0; i < 5; ++i)
{

    scanf("%f", &arr[i]);
}

for (i = 1; i < 5; ++i)
{
    if (arr[temp] < arr[i])
    temp=i;
}
printf("Largest element = %.2f\n", arr[temp]);
printf("Index = %d",temp);

return 0;
}