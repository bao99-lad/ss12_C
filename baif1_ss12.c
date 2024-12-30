#include <stdio.h>

// Hàm tính tổng của hai số
int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int so1, so2, tong;

    // Nhập hai số từ người dùng
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    // Gọi hàm tính tổng
    tong = tinhTong(so1, so2);

    // In kết quả
    printf("Tong cua %d va %d la: %d\n", so1, so2, tong);

    return 0;
}