#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
	int id;
	char name[101];
	double price;
} book;

void nhapSach(book b[], int n) {
	for(int i = 0; i < n; i++) {
		printf("---------------------------\n");
		printf("Nhap id: ");
		scanf("%d", &b[i].id);
		
		while (getchar() != '\n');
		
		printf("Nhap ten sach: ");
		if (fgets(b[i].name, sizeof(b[i].name), stdin)) {
    	b[i].name[strcspn(b[i].name, "\n")] = 0;
  	}
  	
		printf("Nhap gia: ");
		scanf("%lf", &b[i].price);
	}
}

void xuatSach(book b[], int n) {
	for(int i = 0; i < n; i++) {
		printf("---------------------------\n");
		printf("Id: %d\n", b[i].id);
		printf("Name: %s\n", b[i].name);
		printf("Price: %.2lf\n", b[i].price);
	}
}

book maxPrice(book b[], int n) {
	book max = b[0];
	for(int i = 1; i < n; i++) {
		if(b[i].price > max.price) {
			max = b[i];
		}
	}
	return max;
}

void findId(book b[], int n, int find) {
	int check = 0;
	for(int i = 0; i < n; i++) {
		if(b[i].id == find) {
			check = 1;
			printf("Da tim thay id tai index: %d\n", i);
		}
	}
	if(check == 0) {
		printf("Not found\n");
	}
}

void ascendingSort(book b[], int n) {
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(b[i].price > b[j].price) {
				book temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
}

int main() {
  system("cls");
	int n;
	printf("Nhap so sach: ");
	scanf("%d", &n);
	book b[n];
	nhapSach(b, n);
	
	book kq = maxPrice(b, n);
	
	printf("Id: %d\n", kq.id);
	printf("Name: %s\n", kq.name);
	printf("Price: %.2lf\n", kq.price);

	int find;
	printf("Nhap id can tim: ");
	scanf("%d", &find);
	
	findId(b, n, find);
	
	ascendingSort(b, n);
	printf("Sap xep tang dan theo price: \n");
	xuatSach(b,n);
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
