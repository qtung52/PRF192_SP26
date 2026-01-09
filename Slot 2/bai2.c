#include <stdio.h>

int main() {
	double a = 5;
	double b = 10.216;
	double sum = a + b;
	printf("a = %.2lf\nb = %.2lf\n", a, b);
	printf("%.2lf + %.2lf = %.2lf", a, b, sum);
	return 0;
}