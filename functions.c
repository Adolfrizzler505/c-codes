#include <stdio.h>
#include<string.h>

int main(){
    
    char s1[50],s2[50], temp[50];

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    printf("Length of first string is: %d\n", strlen(s1));
    strcpy(temp,s1);
    printf("Copy of first string: %s\n", temp);
    printf("Concatenated string: %s\n", strcat(s1, s2));
    printf("Uppercase: %s\n", strupr(s1));
    printf("Lowercase: %s\n", strlwr(s1));
    printf("Reversed string: %s", strrev(s1));
    return 0;
}