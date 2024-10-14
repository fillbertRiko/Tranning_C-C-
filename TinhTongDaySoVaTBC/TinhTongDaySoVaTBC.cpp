#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Nhập số lượng số trong dãy từ người dùng
    printf("Nhập số lượng số trong dãy: ");
    scanf("%d", &n);

    // Nhập các số vào từng phần tử của dãy và tính tổng
    printf("Nhập các số trong dãy:\n");
    for (int i = 1; i <= n; i++) {
        double number;
        printf("Nhập số thứ %d: ", i);
        scanf("%lf", &number);
        sum += number;
    }

    // Tính trung bình cộng
    double average = sum / n;

    // In ra tổng và trung bình cộng
    printf("Tổng của dãy số là: %0.2lf\n", sum);
    printf("Trung bình cộng của dãy số là: %0.2lf\n", average);

    return 0;
}
