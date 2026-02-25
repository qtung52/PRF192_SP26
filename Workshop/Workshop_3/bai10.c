#include <stdio.h>

int main() {
	long long soDu = 1000000;	//1trieu VND
	long long soTienRut;
	int chon;
	printf("==================================\n");
	printf("          ---ATM menu---\n");
	
	for(;1;) {
		printf("==================================\n");
		printf("   So du hien tai: %lldVND\n", soDu);
		printf("==================================\n");
		printf("[1] - Rut tien\n");
		printf("[2] - Thoat menu\n");
		printf("Chon(1/2): ");
		
		if(scanf("%d", &chon) != 1 || (chon != 1 && chon != 2)) {
			printf("[!] Lua chon khong hop le. Vui long chon lai!\n");
            while(getchar() != '\n');
            continue;	//Dùng để bỏ qua phần sau rồi chạy lên while
		}
	
		if(chon == 1) {
			printf("Nhap so tien can rut: ");
			if (scanf("%lld", &soTienRut) != 1) {
    			printf("[!] So tien khong hop le!\n");
    			while(getchar() != '\n');
    			continue;	//Dùng để bỏ qua phần sau rồi chạy lên while
			}
			
			if (soDu == 0) {
                printf("[!] So du tai khoan khong kha dung.\n");         
			} else {
				if(soTienRut <= 0) {
					printf("[!] So tien rut khong hop le.\n");
				} else if(soTienRut > soDu) {
					printf("[!] Rut tien that bai! So du khong du.\n");
				} else {
					soDu -= soTienRut;
					printf("Rut tien thanh cong: -%lldVND\n", soTienRut);
				}
			}
		} else if (chon == 2) {
            printf("Cam on ban da su dung dich vu.");
            break;
        }
	}
	return 0;
}
