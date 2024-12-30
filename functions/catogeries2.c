// CALCULATE SIMPLE INTEREST USING FUNCTIONS

#include <stdio.h>

int interest(int p, int r, int t);  /* Function prototype, here the paramaters can be different compared to the main function but 
                                    u should provide the specific no of parameter which are going to be used*/


int interest(int p, int r, int t){                               // function declaration       

    printf("The Simple Interest is %d", (p*r*t)/100);           
    return (p*r*t)/100;

}




int main(){

    int p,r,t;

    printf("Enter p,r,t: \n");
    scanf("%d %d %d", &p,&r,&t);

       // function calling  

    interest(p,r,t);    //parameter used here are the one used in the main function.
    
    return 0;
}