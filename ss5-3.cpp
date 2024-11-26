#include <stdio.h>

int main() {
    int n;          // So nguyen duong nhap vao
    int sum = 0;    // Tong cac so tu 1 den n

    // Yeu cau nguoi dung nhap so nguyen duong
    do {
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("So nhap vao phai la so nguyen duong. Vui long thu lai!\n");
        }
    } while (n <= 0); // Lap lai neu so nhap khong hop le

    // Tinh tong tu 1 den n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // In ket qua ra man hinh
    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);

    return 0;
}

