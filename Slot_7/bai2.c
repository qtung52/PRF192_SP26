#include <stdio.h>

int main() {
	int so1, so2;
	float kq;
	char phepTinh;
	
	scanf("%d, %d", &so1, &so2);
	fflush(stdin);
	scanf("%c", &phepTinh);
	
	switch(phepTinh) {
		case '+':
			kq = so1 + so2;
			break;
		case '-':
			kq = so1 - so2;
			break;
		case '*':
			kq = so1 * so2;
			break;
		case '/':
			if(so2 == 0) {
				printf("Khong the chia cho 0");
				return 0;
			} else
				kq = (float)so1 / so2;
			break;
		case '%':
			if(so2 == 0) {
				printf("Khong the chia cho 0");
				return 0;
			}
			kq = so1 % so2;
			break;
		default:
			printf("Nhap sai phep tinh");
			return 0;
	}
	
	
	printf("Phep tinh: %d %c %d = %.2f", so1, phepTinh, so2, kq);
	return 0;
}