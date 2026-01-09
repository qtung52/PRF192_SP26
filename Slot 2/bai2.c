#include <stdio.h>

int main() {
	double a = 5;
	double b = 10.216;
	double sum = a + b;
	printf("a = %.2lf\nb = %.2lf\n", a, b);
	printf("%.0lf + %.3lf = %.2lf", a, b, sum);
	return 0;
}