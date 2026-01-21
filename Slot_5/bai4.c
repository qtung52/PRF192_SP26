#include <stdio.h>

int main() {
	int money;
	int soKwh;
	printf("Nhap so Kwh: ");
	scanf("%d", &soKwh);
	if(soKwh <= 100) {
		money = soKwh * 950;
	} else if(soKwh > 100 && soKwh <= 150) {
		money = soKwh * 1250;
	} else if(soKwh > 150 && soKwh <= 200) {
		money = soKwh * 1350;
	} else{
		money = soKwh * 1550;
	}
	printf("So tien phai tra la: %d", money);
	return 0;
}