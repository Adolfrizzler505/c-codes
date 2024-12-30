#include <stdio.h>


    
    void show(int *a, int *b){

        *a = 1000;
        *b = 2000;

        printf("a = %d b = %d\n", *a, *b);


    }

    int main(){

        int a, b;

        a = 2;
        b = 3;

        printf("a = %d b = %d\n", a,b);

        show(&a,&b);
        printf("a = %d b = %d", a,b);
    


    return 0;
}