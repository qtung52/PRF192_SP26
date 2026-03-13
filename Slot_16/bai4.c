#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void swapTwoNumbers(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swapThreeNumbers(int *x, int *y, int *z) {
	int temp = *z;
	*z = *y;
	*y = *x;
	*x = temp;
}

int main() {
  system("cls");

	int a, b;
	int x, y, z;
	printf("Nhap hai so: ");
	scanf("%d %d", &a, &b);
	
	printf("Nhap ha so: ");
	scanf("%d %d %d", &x, &y, &z);
	
	swapTwoNumbers(&a, &b);
	swapThreeNumbers(&x, &y, &z);
	
	printf("%d %d\n", a, b);
	printf("%d %d %d", x, y, z);
	printf("\n");
  system ("pause");
  return(0);
}
