#include <stdio.h>

int main() {
	int n;
	int tong;
	printf("Nhap so nguyen n (Nhap 0 de thoat): ");
	scanf("%d", &n);
	
	while(n != 0) {
		tong += n;
		printf("Nhap so nguyen n (Nhap 0 de thoat): ");
		scanf("%d", &n);
	}
	
	printf("Tong: %d", tong);
	
	return 0;
}
