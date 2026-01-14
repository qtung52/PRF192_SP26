#include <stdio.h>

int main() {
	int a,b;
	a = 7;
	b = 2;
	float kq;
	printf("%-15s %-15s %-15s %-15s %-15s\n", "A", "Phep tinh", "B", "Bang", "Ket qua");
	printf("-----------------------------------------------------------------------\n");
	kq = a + b;
	printf("%-15d %-15c %-15d %-15c %-15.0f\n", a,'+', b,'=', kq);
	kq = a - b;
	printf("%-15d %-15c %-15d %-15c %-15.0f\n", a,'-', b,'=', kq);
	kq = a * b;
	printf("%-15d %-15c %-15d %-15c %-15.0f\n", a,'*', b,'=', kq);
	kq = (float)a / b;
	printf("%-15d %-15c %-15d %-15c %-15.1f\n", a,'/', b,'=', kq);
	return 0;
}