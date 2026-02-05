#include <stdio.h>

int main() {
	int n;
	long long ketQua = 0;
	long long bac = 1;
	
	printf("Nhap so: ");
	while(scanf("%d", &n) != 1 || n < 0) {
		printf("Nhap sai. Nhap lại: ");
		while(getchar() != '\n');
	}
	
	while(n > 0) {
		int soDu = n % 2;
		ketQua = ketQua + (soDu * bac);
		n = n / 2;
		bac = bac * 10;
	}
	
	printf("He nhi phan: %lld", ketQua);
	
	return 0;
}
