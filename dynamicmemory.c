#include <stdio.h>
#include<stdlib.h>


int main(){
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int *p1 = (int*) calloc(n, sizeof(int));

    for(int i =0; i<n; i++){
        // int *p1 = (int*) malloc(sizeof(int));
        printf("Enter a number: ");
        scanf("%d", p1+i);
        sum += *(p1+i);
        free(p1);
    }
    free(p1);
    printf("Sum = %d", sum);
    return 0;
}