#include <stdio.h>

int main () {
	float chuyenCan, giuaKy, cuoiKy;
	float tong;
	char diemChu;
	
	printf("Nhap diem: ");
	if(scanf("%f %f %f", &chuyenCan, &giuaKy, &cuoiKy) != 3 || chuyenCan < 0 || giuaKy < 0 || cuoiKy < 0) {
		printf("Nhap sai diem!");
		return 0;
	}
	
	tong = (chuyenCan * 0.1) + (giuaKy * 0.3) + (cuoiKy * 0.6);
	
	if(tong >= 8.5 && tong <=10) {
		diemChu = 'A';
	} else if(tong >= 7) {
		diemChu = 'B';
	} else if(tong >= 5.5) {
		diemChu = 'C';
	} else if(tong >= 4) {
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