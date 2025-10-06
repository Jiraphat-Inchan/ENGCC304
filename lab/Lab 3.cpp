/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter N : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("N must be a positive integer.\n");
        return 1; 
    }

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter value[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Index:  ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", i);
    }
    printf("\n");

    printf("Array:  ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%2d ", arr[i]);
        } else {
            printf("%2s ", "#");
        }
    }
    printf("\n");
    free(arr);

    return 0;
}
