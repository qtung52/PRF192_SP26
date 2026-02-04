#include <stdio.h>

int main() {
	int n;
	int kiemTra = 0;
	printf("Nhap so nguyen n: ");
	if(scanf("%d", &n) != 1) {
		printf("Nhap sai!");
		return 0;
	}
	
	if(n < 0) {
		printf("%d khong phai la so chinh phuong", n);
		return 0;
	}
	
	int i = 0;
	while(i * i <= n) {
		if(i * i == n) {
			kiemTra = 1;
			break;
		}
		i++;
	}
	
	if(kiemTra) {	// Nếu biến kiemTra = 1 thì tương đương true
		printf("%d la so chinh phuong", n);
	} else {
		printf("%d khong phai la so chinh phuong", n);
	}
	
	return 0;
}
