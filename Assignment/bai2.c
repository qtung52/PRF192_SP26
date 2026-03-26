#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
	
	//Ghi file
	FILE *fp;
	
	fp = fopen("bai2.txt", "w");
	
	if(fp == NULL) {
		printf("Mo file ko thanh cong");
		return 0;
	} else {
		printf("Mo file thanh cong\n");
	}
	
	printf("Nhap n: ");
	int n;
	scanf("%d", &n);
	
	printf("Nhap vao tung phan tu cua mang:\n");
	int arr[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	fprintf(fp, "%d\n", n);
	for(int i = 0; i < n; i++) {
		fprintf(fp, "%d ", arr[i]);
	}
	
	fclose(fp);
	
	//Doc file
	
	fp = fopen("bai2.txt", "r");
	
	if(fp == NULL) {
		printf("Mo file ko thanh cong");
		return 0;
	}
	
	int count;
	
	if(fscanf(fp, "%d", &count) != EOF) {
		printf("%d\n", count);
		int value;
		for(int i = 0; i < count; i++) {
			if(fscanf(fp, "%d", &value) != EOF) {
				printf("%d ", value);
			}
		}
	}
	fclose(fp);
	
  printf("\n");
  system ("pause");
  return(0);
}
