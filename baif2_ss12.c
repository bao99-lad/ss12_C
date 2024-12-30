#include <stdio.h>

// Hàm để in ra tất cả các phần tử của mảng
void printArray(int arr[], int size) {
    printf("Các phần tử trong mảng là:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Khai báo và khởi tạo một mảng
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]); // Tính kích thước của mảng

    // Gọi hàm để in ra các phần tử của mảng
    printArray(myArray, size);

    return 0;
}