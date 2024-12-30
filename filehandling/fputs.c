#include <stdio.h>
#include<string.h>


int main(){
    char str[50];
    printf("Enter a string: ");
    gets(str);

    FILE *fp = fopen("shiet.txt", "a");
    strcat(str, "\n");
    fputs(str, fp);
    printf("Test write in file successfully!!");
    fclose(fp);
    rewind(fp);

    //reading data from file
    FILE *fp1 = fopen("shiet.txt", "r"); 
    while(!feof(fp)){
        fgets(str, 50, fp);
        puts(str);
    }
    fclose(fp);
    return 0;
}