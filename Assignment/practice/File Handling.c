/* 13LAB EXERCISE:
o Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents.*/
#include <stdio.h>
main() {
    FILE *fp;
    char str[100];
    fp = fopen("example.txt", "w");  
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter a string to write to the file: ");
    scanf(" %[^\n]", str);

    fprintf(fp, "%s", str);  
    fclose(fp);  

    fp = fopen("example.txt", "r");  
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nContents of the file:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);  
    }

    fclose(fp);  
}
