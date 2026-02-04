#include <stdio.h>

int main() {
	int a, b, soBiChia, soChia;
	printf("Nhap hai so a va b: ");
	if(scanf("%d %d", &a, &b) != 2) {
		printf("Nhap sai!");
		return 0;
	}
	//Đổi số âm sang số dương
	int newA = (a < 0) ? -a : a;
	int newB = (b < 0) ? -b : b;
	
	soBiChia = newA;
	soChia = newB;
	
	while(soChia != 0) {
		int soDu = soBiChia % soChia;
		soBiChia = soChia;
		soChia = soDu;
	}
	
	printf("UCLN cua %d va %d la %d", a, b, soBiChia);
	return 0;
}
