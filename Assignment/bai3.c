#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct {
	int id;
	char name[30];
	float grade;
} sinhVien;

int main() {
  system("cls");
  
	//Ghi file
  FILE *fp;
  
  fp = fopen("bai3.txt", "w");
  
  int n;
  scanf("%d", &n);
  
	sinhVien hs[n];
	
	for(int i = 0; i < n; i++) {
		printf("Sinh vien %d:\n", i+1);
		printf("Nhap id: ");
		scanf("%d", &hs[i].id);
		
		while (getchar() != '\n');

		printf("Nhap ten: ");
		if (fgets(hs[i].name, sizeof(hs[i].name), stdin)) {
    	hs[i].name[strcspn(hs[i].name, "\n")] = 0;
  	}
		printf("Nhap diem: ");
		scanf("%f", &hs[i].grade);
	}
	
	fprintf(fp, "%d\n", n);
	for(int i = 0; i < n; i++) {
		fprintf(fp, "%d\n", hs[i].id);
		fprintf(fp, "%s\n", hs[i].name);
		fprintf(fp, "%.2f\n", hs[i].grade);
	}
	
	fclose(fp);
	
	//Doc file
	
	fp = fopen("bai3.txt", "r");
	
	int count;
	
	if(fscanf(fp, "%d", &count) != EOF) {
		int id;
		char name[30];
		float grade;
		for(int i = 0; i < count; i++) {
			if(fscanf(fp, "%d", &id) != EOF) {
				printf("%d\n", id);
			}
			if(fscanf(fp, " %[^\n]", &name) != EOF) {
				printf("%s\n", name);
			}
			if(fscanf(fp, "%f", &grade) != EOF) {
				printf("%.2f\n", grade);
			}
		}
	}
	
	fclose(fp);
	
  printf("\n");
  system ("pause");
  return(0);
}
