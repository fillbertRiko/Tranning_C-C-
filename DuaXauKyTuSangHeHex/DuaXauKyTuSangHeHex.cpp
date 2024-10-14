#include <stdio.h>
#include <string.h>

int main() {
    int n, remainder;
    char hex_string[50] = { 0 }; // Mảng để lưu trữ chuỗi hex
    char hex_digits[] = "0123456789ABCDEF"; // Các chữ số hex

    // Nhập số nguyên dương
    printf("Nhập số nguyên dương: ");
    scanf_s("%d", &n);

    // Chuyển đổi số nguyên dương sang chuỗi thập lục phân
    while (n > 0) {
        remainder = n % 16; // Tìm dư khi chia cho 16
        // Chèn chữ số hex tương ứng vào đầu chuỗi hex_string
        char hex_digit = hex_digits[remainder];
        memmove(hex_string + 1, hex_string, strlen(hex_string) + 1); // Dịch phải chuỗi
        hex_string[0] = hex_digit; // Chèn chữ số hex vào vị trí đầu chuỗi
        n /= 16; // Chia n cho 16 để lấy phần nguyên
    }
    // In ra chuỗi thập lục phân tương ứng
    printf("Số thập lục phân tương ứng: %s\n", hex_string);

    return 0;
}
