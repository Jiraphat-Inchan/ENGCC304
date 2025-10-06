#include <stdio.h>

// ฟังก์ชันสำหรับตรวจสอบว่าจำนวนนั้นเป็นจำนวนเฉพาะหรือไม่
int is_prime(int n) {
    if (n <= 1) {
        return 0; // คืนค่า 0 ถ้าตัวเลขน้อยกว่าหรือเท่ากับ 1
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // คืนค่า 0 ถ้ามีตัวเลขที่หารลงตัว
        }
    }
    return 1; // คืนค่า 1 ถ้าเป็นจำนวนเฉพาะ
}

int main() {
    int N;
    printf("ป้อนจำนวน N: ");
    scanf("%d", &N);
    
    int arr[N];
    
    // รับค่าจากผู้ใช้เข้าสู่ Array
    for (int i = 0; i < N; i++) {
        printf("ป้อนค่าที่ %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    // แสดงผล Index
    printf("\nIndex: ");
    for (int i = 0; i < N; i++) {
        printf("%3d", i);
    }
    printf("\n");
    
    // แสดงผล Array พร้อมตรวจสอบจำนวนเฉพาะ
    printf("Array: ");
    for (int i = 0; i < N; i++) {
        if (is_prime(arr[i])) {
            printf("%3d", arr[i]);
        } else {
            printf("%3s", "#");
        }
    }
    printf("\n");
    
    return 0;
}
