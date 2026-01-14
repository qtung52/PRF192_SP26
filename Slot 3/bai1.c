#include <stdio.h>

int main() {
	int a,b;
	a = 7;
	b = 2;
	printf("%-15s %-15s %-15s %-15s %-15s\n", "A", "Phep tinh", "B", "Bang", "Ket qua");
	printf("%-15d %-15c %-15d %-15c %-15d\n", a,'+', b,'=', a + b);
	printf("%-15d %-15c %-15d %-15c %-15d\n", a,'-', b,'=', a - b);
	printf("%-15d %-15c %-15d %-15c %-15d\n", a,'*', b,'=', a * b);
	printf("%-15d %-15c %-15d %-15c %-15.1f\n", a,'/', b,'=', (float)a / b);
	return 0;
}