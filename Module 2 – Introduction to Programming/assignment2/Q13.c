#include <stdio.h>

int main() {
    FILE *fp;
    char str[] = "Hello, this is a file handling example in C!";
    char buffer[100];

    // Create and write to the file
    fp = fopen("example.txt", "w");  // "w" = write mode
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fprintf(fp, "%s", str);  // Write string to file
    fclose(fp);              // Close file after writing

    // Reopen and read from the file
    fp = fopen("example.txt", "r");  // "r" = read mode
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("File contents:\n");
    while (fgets(buffer, sizeof(buffer), fp)) {
        printf("%s", buffer);
    }

    fclose(fp);  // Close file after reading
    return 0;
}

