#include <stdio.h>
#include <string.h>
#include <ctype.h>

// ฟังก์ชันสำหรับตรวจสอบว่าเป็น Palindrome หรือไม่
int isPalindrome(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    // วนลูปเพื่อเปรียบเทียบตัวอักษรจากทั้งสองด้าน
    while (left < right) {
        // ข้ามตัวอักษรที่ไม่ใช่ตัวอักษรหรือตัวเลข (เช่น ช่องว่าง, เครื่องหมายวรรคตอน)
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }

        // เปรียบเทียบตัวอักษรโดยไม่สนใจตัวพิมพ์เล็ก-ใหญ่
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // ไม่ใช่ Palindrome
        }

        left++;
        right--;
    }

    return 1; // เป็น Palindrome
}

int main() {
    char input[100];

    printf("Enter word:\n");
    // รับข้อมูลจากผู้ใช้
    fgets(input, sizeof(input), stdin);

    // ลบอักขระขึ้นบรรทัดใหม่ที่ fgets เพิ่มเข้ามา
    input[strcspn(input, "\n")] = 0;

    // เรียกใช้ฟังก์ชันและแสดงผลลัพธ์
    if (isPalindrome(input)) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }

    return 0;
}