#include <stdio.h>
#include <math.h>

int main() {
	float n, ketQua;
	printf("Nhap n: ");
	for(;scanf("%f", &n) != 1 || n <= 0 || n > 1000;) {
		printf("Nhap lai n: ");
		while(getchar() != '\n');
	}
	
	ketQua = sqrt(n);
	
	printf("Can bac hai cua %.2f la %.2f", n, ketQua);
	
	return 0;
}
