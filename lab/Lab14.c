#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100];
    int count = 0;
    int input;

   
    printf("Enter value:\n");
   
    while (scanf("%d", &input) == 1 && count < 100) {
        arr[count++] = input;
        
        if (getchar() == '\n') break;
    }

    if (count == 0) {
        printf("\nNo data entered.\n");
        return 0;
    }

    int min_val = INT_MAX;
    int max_val = INT_MIN;

    for (int i = 0; i < count; i++) {
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }


    printf("\nOutput:\n");


    printf("Index: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Array: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Min : %d\n", min_val);
    printf("Max : %d\n", max_val);

    return 0;
}
