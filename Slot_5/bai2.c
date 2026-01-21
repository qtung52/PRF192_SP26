#include <stdio.h>

int main() {
	float a, b, c;
	printf("Nhap 3 so a b c: ");
	scanf("%f %f %f", &a, &b, &c);
	float max = a;
	if(b > max) {
		max = b;
	}
	if(c > max) {
		max = c;
	}
	printf("So lon nhat la: %.2f", max);
	return 0;
}