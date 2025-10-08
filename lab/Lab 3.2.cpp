#include <stdio.h> 
#include <stdlib.h> 

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
    printf("Enter N (size of array): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for N. Exiting.\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter value[%d] : ", i);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            free(arr);
            return 1;
        }
    }

    printf("\nIndex:  ");
    for (int i = 0; i < n; i++) {
        printf("%3d", i);
    }
    printf("\n");

    printf("Array:  ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%3d", arr[i]);
        } else {
            printf("%3s", "#");
        }
    }
    printf("\n");

    free(arr);

    return 0;
}
