#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    FILE *file;
    int c;
    int count = 0;
    int in_word = 0; 

    printf("Enter file name: ");
    scanf("%99s", filename); 

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {
        if (isalnum(c)) {
            if (in_word == 0) {
                count++;      
                in_word = 1;  
            }
        } else {

            in_word = 0;
        }
    }
    
    fclose(file);
    printf("Total number of words in '%s': %d words\n", filename, count);

    return 0;
}