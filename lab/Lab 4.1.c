#include <stdio.h>

int main() {
    int days;
    int total_seconds;
    
    printf("ใส่จำนวนวัน (Days): ");
    scanf("%d", &days);

    total_seconds = days * 86400;

    printf("%d days = %d seconds\n", days, total_seconds);
    
    return 0;
}