

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100];
    int n;

    printf("Enter number : ");
    scanf("%s", input);

    int is_number = 1;
    for (int i = 0; i < strlen(input); i++) {
        if (!isdigit(input[i])) {
            is_number = 0;
            break;
        }
    }

    if (is_number) {
        sscanf(input, "%d", &n);

        if (n % 2 == 0) {
        
        printf("เลขคู่ตั้งแต่ %d ลงมาถึง 0 คือ:\n", n);
        for (int i = n; i >= 0; i--) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
    } else {
       
        printf("เลขคี่ตั้งแต่ 1 ถึง %d คือ:\n", n);
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                printf("%d ", i);
            }
          }
        }
    } else {
        printf("กรุณากรอกตัวเลขเท่านั้น.\n");
    }
        printf("\n");
        return 0;
}
