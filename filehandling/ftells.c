#include <stdio.h>

int main(){
    
    char str[50];
    printf("Enter a string: ");
    gets(str);
    FILE *fp = fopen("shiet.txt", "a+");
    strcat(str, "\n");
    fputs(str, fp);
    printf("Test write in the file successfully!!!");
    

    return 0;
}