#include <stdio.h>

int main() {
	int n;
	int kq;
	printf("Nhap so nguyen n: ");
	if(scanf("%d", &n) != 1) {
		printf("Nhap sai!");
		return 0;
	}
	
	while(n > 0) {
		int soDu = n % 10;
		kq = kq * 10 + soDu;
		n = n / 10;
	}
	
	printf("So dao nguoc: %d", kq);
	return 0;
}