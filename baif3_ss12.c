#include <stdio.h>

unsigned long long giai_thua(int n) {
    if (n < 0) {
        printf("Giai thua khong xac dinh cho so am\n");
        return 0; // Trả về 0 cho số âm
    }
    
    unsigned long long result = 1; // Sử dụng kiểu dữ liệu lớn để chứa giá trị giai thừa
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    
    unsigned long long result = giai_thua(n);
    if (n >= 0) {
        printf("Giai thua cua %d la: %llu\n", n, result);
    }
    
    return 0;
}