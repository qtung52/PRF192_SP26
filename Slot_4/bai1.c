#include <stdio.h>

int main() {
	int a, b;
	printf("Nhap hai so nguyen: ");
	int kq = scanf("%d %d", &a, &b);	// check có bnh số nguyên
	if(kq > 0) {
		printf("Ket qua ham scanf: %d\n", kq);
		printf("a = %d, b = %d", a, b);
	} else {
		printf("Ko co so nguyen nao het!");
	}
	printf("\nBtap voi scanf");
	return 0;
}