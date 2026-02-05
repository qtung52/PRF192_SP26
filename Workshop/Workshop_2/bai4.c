#include <stdio.h>

int main() {
	int n;
	int ketQua;
	
	printf("Nhap so nguyen n: ");
	while(scanf("%d", &n) != 1 || n < 0) {
		printf("Nhap sai! Nhap lai so nguyen n: ");
		while(getchar() != '\n');
	}
	
	while(n > 0) {
		int soDu = n % 10;
		ketQua = ketQua * 10 + soDu;
		n = n / 10;
	}
	
	printf("So dao nguoc: %d", ketQua);
	
	return 0;
}
