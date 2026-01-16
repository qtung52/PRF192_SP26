#include <stdio.h>

int main() {
	char phepToan;
	int a, b;
	printf("Nhap a, b: ");
	scanf("%d,%d", &a, &b);
	printf("Nhap phep toan:");
	scanf(" %c", &phepToan);
	if(phepToan == '/'){
		if(b == 0) {
			printf("Khong the chia cho 0");
		}
		else {
			float kq = (float)a / b;
			printf("Ket qua: %d %c %d = %.2f", a, phepToan, b, kq);
		}
	}
	return 0;
}