#include <stdio.h>

int main() {
    int n;
    double S = 0; // Khởi tạo S bằng 0 để tính tổng

    printf("Nhap vao so n: ");
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            S += 1.0 / (2 * i + 1); // Cộng 1/(2n+1) nếu i chẵn
        }
        else {
            S -= 1.0 / (2 * i + 1); // Trừ 1/(2n+1) nếu i lẻ
        }
    }

    printf("Ket qua cua pi theo cong thuc la: %0.4f\n", S * 4); // Nhân với 4 để có giá trị của pi
    return 0;
}
