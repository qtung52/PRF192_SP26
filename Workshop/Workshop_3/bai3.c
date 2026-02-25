#include <stdio.h>

int main() {
	int n;
	
	printf("Nhap so nguyen n: ");
	for(;scanf("%d", &n) != 1 || n < 1 || n > 10;) {
		printf("Nhap lai so nguyen n: ");
		while(getchar() != '\n');
	}
	
	for(int i = 1; i <= n; i++) {
		printf(" %d ", i);
	}
	
	printf("\nBan cuu chuong %d\n", n);

	for(int i = 0; i <= 10; i++) {
		printf("%d x %d = %d\n",n , i , n*i);
	}
	
	return 0;
}
