#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(FILE *sourceFile, FILE *destinationFile, char option) {
    char ch;

    while ((ch = fgetc(sourceFile)) != EOF) {
        if (option == 'u') {
            ch = toupper(ch);
        } else if (option == 'l') {
            ch = tolower(ch);
        } else if (option == 's') {
            if (islower(ch)) {
                ch = toupper(ch);
            }
        }

        fputc(ch, destinationFile);
    }
}

int main(int argc, char *argv[]) {
    FILE *sourceFile, *destinationFile;
    char option = 'n';  // Default option: normal copy
    char ch;

    if (argc < 3) {
        printf("Usage: %s <option> <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    if (argc == 4) {
        option = argv[1][1];  // Extract the option character from the command line argument
        sourceFile = fopen(argv[2], "r");
        destinationFile = fopen(argv[3], "w");
    } else if (argc == 3) {
        sourceFile = fopen(argv[1], "r");
        destinationFile = fopen(argv[2], "w");
    } else {
        printf("Invalid number of arguments.\n");
        return 1;
    }

    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    copyFile(sourceFile, destinationFile, option);

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
