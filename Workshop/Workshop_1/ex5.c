#include <stdio.h>

int main() {
	float soKm;
	int soPhutCho;
	float money;
	int tongTien;
	printf("Nhap so Km: ");
	if(scanf("%f", &soKm) != 1 || soKm <= 0) {
		printf("Nhap sai!");
		return 0;
	}
	printf("Nhap thoi gian cho: ");
	if(scanf("%d", &soPhutCho) != 1 || soPhutCho < 0) {
		printf("Nhap sai!");
		return 0;
	}
	if(soKm <= 0.5) {
		money = 12000;
	} else if(soKm <= 30) {
		money = 12000 + (soKm - 0.5) * 15000;
	} else {
		money = 12000 + 29.5 * 15000 + (soKm - 30) * 12000;
	}
	tongTien = money;
	if (soPhutCho > 5) {
		tongTien =  ((soPhutCho - 5) * 1000) + money;
	}
	printf("%-5s | %-15s | %-10s\n", "So Km", "So phut cho", "Tong tien");
	printf("%-5.2f | %-15d | %-10d", soKm, soPhutCho, tongTien);
	return 0;
}