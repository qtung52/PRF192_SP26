#include <stdio.h>

int main() {
	int n;
	
	printf("Nhap so nguyen n: ");
	while(scanf("%d", &n) != 1 || n < 1 || n > 10) {
		printf("Nhap lai so nguyen n: ");
		while(getchar() != '\n');
	}
	
	int i = 1;
	while(i <= n) {
		printf(" %d ", i);
		i++;
	}
	
	printf("\nBan cuu chuong %d\n", n);
	i = 1;	// reset i=1 để dùng while phía dưới
	while(i <= 10) {
		printf("%d x %d = %d\n",n , i , n*i);
		i++;
	}
	
	return 0;
}
