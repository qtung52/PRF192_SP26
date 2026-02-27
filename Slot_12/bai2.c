#include <stdio.h>

int timSo(int a, int b, int c) {
	if(a > b && a > c) return a;
	else if (b > a && b > c) return b;
	else return c;
}

int nhapInt() {
	int soInt;
	printf("Nhap so int: ");
	while(scanf("%d", &soInt) != 1 || soInt <= 0) {
		printf("Nhap sai! \nNhap lai: ");
		fflush(stdin);
	}
	return soInt;
}

int main() {
	int a, b, c;
	a = nhapInt();
	b = nhapInt();
	c = nhapInt();
	
	printf("So lon nhat la: %d", timSo(a, b, c));
	return 0;
}
