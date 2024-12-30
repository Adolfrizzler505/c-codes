#include <stdio.h>

int main(){

    int x = 18;

    int *const ptr = &x;

    *ptr = 180;

    printf("The value of x = %d \n", *ptr);
    printf("The value of ptr = %d \n", ptr);
    

    return 0;
}