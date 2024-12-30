#include <stdio.h>
#include<stdlib.h>


int main(){
    
    int *p1 = (int*) malloc(sizeof(int));
    char *p2 = (char*) malloc(sizeof(char));
    float *p3 = (float*) malloc(sizeof(float));
    double *p4 = (double*) malloc(sizeof(double));

    int *a1 = (int*) calloc(5, sizeof(int));
    char *a2 = (int*) calloc(10, sizeof(char));


    return 0;
}