#include <stdio.h>

int main() {
    int arr[] = {15, 7, 25, 3, 73, 32, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 32;
    int pos_of_32 = -1;

    printf("Old Series : ");
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i < n - 1) ? ", " : "");
    }
    printf("\n");

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("New Series : ");
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i < n - 1) ? ", " : "");
        if (arr[i] == target) {
    
            pos_of_32 = i + 1;
        }
    }
    printf("\n");
    
    printf("Pos of 32 : %d\n", pos_of_32); 

    return 0;
}