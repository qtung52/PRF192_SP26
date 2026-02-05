#include <stdio.h>

int main() {
	int n;
	
	printf("Nhap so nguyen n: ");
	while(scanf("%d", &n) != 1) {
		printf("Nhap sai! Nhap lai so nguyen n: ");
		while(getchar() != '\n');
	}
	
	if(n < 0) {
		printf("%d khong phai la so chinh phuong", n);
	} else {
		int i = 0;
		while(i * i < n) {
			i++;
		}
		
		if(i * i == n) {
			printf("%d la so chinh phuong", n);
		} else {
			printf("%d khong phai la so chinh phuong", n);
		}
	}
	return 0;
}
