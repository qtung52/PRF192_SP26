#include <stdio.h>

int main() {
	int thang;
	int quy;
	printf("Nhap thang: ");
	int kqNhap = scanf("%d", &thang);
	if(kqNhap != 1 || thang < 1 || thang > 12) {
		printf("Nhap sai thang");
		return 0;
	}
	
	switch(thang) {
		case 1:
		case 2:
		case 3:
			quy = 1;
			break;
		case 4:
		case 5:
		case 6:
			quy = 2;
			break;
		case 7:
		case 8:
		case 9:
			quy = 3;
			break;
		default:
			quy = 4;
			break;
	}
	
	printf("Thang: %d \nQuy: %d", thang, quy);
	return 0;
}
