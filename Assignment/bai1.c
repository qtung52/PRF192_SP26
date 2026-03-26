#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");

	FILE *fp;
	
	fp = fopen("bai1.txt", "w");
	
	if(fp == NULL) {
		printf("Mo file ko thanh cong");
		return 0;
	} else {
		printf("Mo file thanh cong\n");
	}
	
	int n;
	printf("Nhap so n: ");
	scanf("%d", &n);
	fprintf(fp, "So n: %d\n", n);
	
	fclose(fp);
	
	fp = fopen("bai1.txt", "r");
	
	if(fp == NULL) {
		printf("Mo file ko thanh cong");
		return 0;
	}
	
	char s;
	
	do {
		s = fgetc(fp);
		printf("%c", s);
	} while (s != EOF);
	
	fclose(fp);

  system ("pause");
  return(0);
}
