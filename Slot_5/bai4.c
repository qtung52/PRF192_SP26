#include <stdio.h>

int main() {
	int money;
	int soKwh;
	printf("Nhap so Kwh: ");
	scanf("%d", &soKwh);
	if(soKwh <= 100) {
		money = soKwh * 950;
	} else if(soKwh <= 150) {
		money = 100 * 950 + (soKwh - 100) * 1250;
	} else if(soKwh <= 200) {
		money = 100 * 950 + 150 * 1250 + (soKwh - 150) * 1350;
	} else{
		money = 100 * 950 + 150 * 1250 + 200 * 1350 + (soKwh - 200) * 1550;
	}
	printf("So tien phai tra la: %d", money);
	return 0;
}