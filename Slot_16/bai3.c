#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void reverseString(char str[]) {
	int n = strlen(str);
	
	for(int i = 0; i < n/2; i++) {
		char temp = str[i];
		str[i] = str[n - 1 - i];
		str[n - 1 - i] = temp;
	}
}

void swapTwoNumbers(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
  system("cls");

	char str[101];
	int a, b;
	
	printf("Nhap chuoi: ");

	if (fgets(str, sizeof(str), stdin)) {
    str[strcspn(str, "\n")] = 0;
  }
  
  printf("Nhap hai so: ");
  
  scanf("%d %d", &a, &b);

	reverseString(str);
	swapTwoNumbers(&a, &b);
	
	printf("Dao nguoc chuoi: %s\n", str);
	printf("Dai nguoc hai so: %d %d", a, b);
	printf("\n");
  system ("pause");
  return(0);
}
