#include <stdio.h>

int main () {
	float chuyenCan, giuaKy, cuoiKy;
	float tong;
	char diemChu;
	
	printf("Nhap diem chuyen can: ");
	if(scanf("%f", &chuyenCan) != 1 || chuyenCan < 0) {
		printf("Nhap sai diem!");
		return 0;
	}
	
	printf("Nhap diem giua ky: ");
	if(scanf(" %f", &giuaKy) != 1 || giuaKy < 0) {
		printf("Nhap sai diem!");
		return 0;
	}
	
	printf("Nhap diem cuoi ky: ");
	if(scanf(" %f", &cuoiKy) != 1 || cuoiKy < 0) {
		printf("Nhap sai diem!");
		return 0;
	}
	
	tong = (chuyenCan * 0.1) + (giuaKy * 0.3) + (giuaKy * 0.6);
	
	if(tong >= 8.5 && tong <=10) {
		diemChu = 'A';
	} else if(tong >= 7 && tong < 8.5) {
		diemChu = 'B';
	} else if(tong >= 5.5 && tong < 7) {
		diemChu = 'C';
	} else if(tong >= 4 && tong < 5.5) {
		diemChu = 'D';
	} else {
		diemChu = 'F';
	}
	
	printf("Diem so: %.1f \nDiem chu: %c\n", tong, diemChu);
	
	if (chuyenCan >= 4.0 && giuaKy >= 4.0 && cuoiKy >= 4.0 && diemChu != 'F') {
        printf("DU DIEU KIEN TOT NGHIEP\n");
    } else {
        printf("KHONG DU DIEU KIEN TOT NGHIEP\n");
    }
    
	return 0;
}