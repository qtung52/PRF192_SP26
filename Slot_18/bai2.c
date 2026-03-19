#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
	int x, y;
} point;

void nhapDiem(point p[], int n) {
	for(int i = 0; i < n; i++) {
		printf("Nhap diem thu %d: ", i + 1);
		scanf("%d %d", &p[i].x, &p[i].y);
	}
}

void xuatDiem(point p[], int n) {
	for(int i = 0; i < n; i++) {
		printf("(%d, %d)\n", p[i].x, p[i].y);
	}
}

point diemLonHon(point p[], int n) {
	for(int i = 0; i < n; i++) {
		if(p[i].y > p[i].x) {
			check = 1;
			return p[i];
		}
	}
	
	point temp = {0, 0};
	return temp;
}
	
int main() {
  system("cls");
	printf("\nINPUT:\n");

	int n;
	scanf("%d", &n);
	
	point p[n];
	nhapDiem(p, n);
	
	printf("\nOUTPUT:\n");
	
	xuatDiem(p, n);
	
	printf("y > x:\n");
	point kq = diemLonHon(p, n);
	printf("(%d, %d)", kq.x, kq.y);
	
  printf("\n");
  system ("pause");
  return(0);
}
