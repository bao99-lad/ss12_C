#include <stdio.h>
#include <stdbool.h>

#define MAX 100

// H�m ki?m tra s? nguy�n t?
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// H�m nh?p m?ng 2 chi?u
void inputArray(int arr[MAX][MAX], int n, int m) {
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

// H�m in m?ng 2 chi?u
void printArray(int arr[MAX][MAX], int n, int m) {
    printf("Gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// H�m in c�c ph?n t? g�c c?a ma tr?n
void printCorners(int arr[MAX][MAX], int n, int m) {
    printf("Cac phan tu o goc:\n");
    printf("%d ", arr[0][0]);
    printf("%d ", arr[0][m-1]);
    printf("%d ", arr[n-1][0]);
    printf("%d\n", arr[n-1][m-1]);
}

// H�m in c�c ph?n t? tr�n du?ng bi�n c?a ma tr?n
void printBorders(int arr[MAX][MAX], int n, int m) {
    printf("Cac phan tu tren duong bien:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][0]); // C?t d?u
        printf("%d ", arr[i][m-1]); // C?t cu?i
    }
    for (int j = 1; j < m-1; j++) {
        printf("%d ", arr[0][j]); // D�ng d?u
        printf("%d ", arr[n-1][j]); // D�ng cu?i
    }
    printf("\n");
}

// H�m in c�c ph?n t? tr�n du?ng ch�o ch�nh v� ch�o ph?
void printDiagonals(int arr[MAX][MAX], int n, int m) {
    printf("Cac phan tu tren duong cheo chinh va cheo phu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]); // �u?ng ch�o ch�nh
        printf("%d ", arr[i][m-i-1]); // �u?ng ch�o ph?
    }
    printf("\n");
}

// H�m in c�c ph?n t? l� s? nguy�n t?
void printPrimeNumbers(int arr[MAX][MAX], int n, int m) {
    printf("Cac phan tu la so nguyen to:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isPrime(arr[i][j])) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int arr[MAX][MAX], n, m;
    int choice;

    // Nh?p k�ch thu?c m?ng
    printf("Nhap so dong (n) va so cot (m): ");
    scanf("%d%d", &n, &m);

    do {
        // In menu
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray(arr, n, m);
                break;
            case 2:
                printArray(arr, n, m);
                break;
            case 3:
                printCorners(arr, n, m);
                break;
            case 4:
                printBorders(arr, n, m);
                break;
            case 5:
                printDiagonals(arr, n, m);
                break;
            case 6:
                printPrimeNumbers(arr, n, m);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 7);

    return 0;
}

