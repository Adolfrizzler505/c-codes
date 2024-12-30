#include <stdio.h>

int cube(int a){

    printf("The cube of the number is %d", a*a*a);
    return a*a*a;


}

int main(){


    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    cube(n);



    return 0;
}