#include <stdio.h>

int main() {
	printf("Nhap so thuc: ");
	float a;
	scanf("%f", &a);
	printf("Gia tri da nhap: %.4f\n", a);
	int phanNguyen = (int)a;
	printf("Phan nguyen la: %d\n", phanNguyen);
	float phanThuc = a - phanNguyen;
	printf("Phan thuc la: %.4f\n", phanThuc);
	return 0;
}