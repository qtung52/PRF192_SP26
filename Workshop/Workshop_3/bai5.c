#include <stdio.h>

int main() {
	int n;
	int tong = 0;
	
	for(;1;) {
		printf("Nhap so nguyen n (Nhap 0 de thoat): ");
		scanf("%d", &n);
		
		if(n == 0) {
			break;
		}
		
		if (n < 0) {
            printf("Ban da nhap so am. Vui long nhap lai!\n");
            continue;	//Dùng countinue để bỏ qua tong += n để chạy lên while
        }
		
		tong += n;
	}
	
	printf("Tong: %d", tong);
	
	return 0;
}
