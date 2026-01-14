#include <stdio.h>

int main() {
	char kytu = 't';
	printf("%-15s %-15s %-15s %-15s %-15s\n", "Gtri", "Gtri thap phan", "Gtri hex", "Gtri octal", "Kich thuoc");
	printf("--------------------------------------------------------------------------\n");
	printf("%-15c %-15d %-15x %-15o %-15d", kytu, kytu, kytu, kytu, sizeof(kytu));
	return 0;
}