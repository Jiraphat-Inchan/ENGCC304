#include <stdio.h>

int main() {
    int n;

    char *ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                    "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                    "seventeen", "eighteen", "nineteen"};
    char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    printf("User Input :");
    if (scanf("%d", &n) != 1 || n < 1 || n > 99) {
        printf("Result : Invalid input or out of range (1-99).\n");
        return 1;
    }

    printf("Result : ");

    if (n <= 19) {
        printf("%s\n", ones[n]);
    } 
    else {
        printf("%s", tens[n / 10]); 
        
        if (n % 10 != 0) {
            printf(" %s", ones[n % 10]);
        }
        printf("\n");
    }

    return 0;
}