#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
	int x, y;
} point;

int main() {
  system("cls");
  printf("\nINPUT:\n");
	
	point p;
	
	p.x = 10;
	p.y = 15;
	
	printf("%d %d", p.x, p.y);
	
	printf("\nNhap so moi: ");
	scanf("%d %d", &p.x, &p.y);
	
	printf("\nOUTPUT:\n");
	
	printf("%d %d", p.x, p.y);

  printf("\n");
  system ("pause");
  return(0);
}
