#include <stdio.h>
#include <math.h>

int main() {
	float n;
	int count = 1;
	
	while(1) {
		printf("Nhap so thu %d: ", count);
		while(scanf("%f", &n) != 1 || n <= 0) {
			printf("Nhap lai so thu %d: ", count);
			fflush(stdin);
		}
		
		float kq = sqrt(n);
		
		printf("Can bac hai la: %.2f\n", kq);
		count ++;
		if(count == 6) break;
	}
	
	printf("Da xong! Xuat sac!");
	return 0;
}
