#include <stdio.h>
#include <stdlib.h> // Thư viện để dùng rand() và srand()
#include <time.h>   // Thư viện để lấy thời gian hệ thống

int main() {
	srand(time(NULL));
	//Công thức tổng quát: min + rand() % (max - min + 1)
	int soNgauNhien = 1 + rand() % (10 - 1 + 1);	//Tạo ra một số ngẫu nhiên từ 1 đến 10
	
	int n = 0;
	while(n != soNgauNhien) {
		printf("Nhap so: ");
		if(scanf("%d", &n) != 1 || n < 1 || n > 10) {
			printf("Nhap sai! Vui long nhap lai.\n");
			while(getchar() != '\n');
			continue;
		}
		
		if(n > soNgauNhien) {
			printf("Nho hon\n");
		} else if (n < soNgauNhien) {
			printf("Lon hon\n");
		}
	}
	
	printf("Ban da doan dung!");
	return 0;
}
