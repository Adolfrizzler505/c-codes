#include <stdio.h>

int main(){

    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    FILE* fp = fopen("shiet.txt", "w"); //in w mode it rewrites the previous data, only the newly typed data is stored
    fputc(ch, fp);
    return 0;
}