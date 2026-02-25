#include <stdio.h>

int main() {
	int n;
	
	printf("Nhap so nguyen n: ");
	for(;scanf("%d", &n) != 1;) {
		printf("Nhap sai! Nhap lai so nguyen n: ");
		while(getchar() != '\n');
	}
	
	if(n < 0) {
		printf("%d khong phai la so chinh phuong", n);
	} else {
        int laSoChinhPhuong = 0;
		
		for(int i = 0; i * i <= n; i++) {
            if(i * i == n) {
			    laSoChinhPhuong = 1;
		    }   
		}
        
        if(laSoChinhPhuong) {
            printf("%d la so chinh phuong", n);
        } else {
			printf("%d khong phai la so chinh phuong", n);
        }
	}
	return 0;
}
