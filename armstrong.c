#include <stdio.h>

int main(){

    int num, original_number,remainder,result=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_number=num;

    while(original_number!=0){
        remainder=original_number%10;
        result += remainder*remainder*remainder;
        original_number/=10;
    }

    // num=original_number;

    if(result==num){    
        printf("%d is an Armstrong number.", num);
    }

    else{
        printf("%d is not an Armstrong number.", num);
    }
    
    return 0;
}