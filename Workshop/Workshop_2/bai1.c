#include <stdio.h>
#include <math.h>

int main() {
	float n, ketQua;
	printf("Nhap n: ");
	while(scanf("%f", &n) != 1 || n <= 0 || n > 1000) {
		printf("Nhap lai n: ");
		while(getchar() != '\n');
	}
	
	ketQua = sqrt(n);
	
	printf("%.2f", ketQua);
	
	return 0;
}