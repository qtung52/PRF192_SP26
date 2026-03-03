#include <stdio.h>

int is_leap_year(int year) {
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    }
    return 0;
}

int get_days_in_month(int month, int year) {
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 2:
            if(is_leap_year(year) == 1) return 29;
            else return 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
    }
}

int main() {
    int month, year;
    
    printf("Nhap thang: ");
    while(scanf("%d", &month) != 1 || month < 1 || month > 12) {
    	printf("Nhap sai! Nhap lai thang: ");
    	while (getchar() != '\n');
	}
	
    printf("Nhap nam: ");
    while(scanf("%d", &year) != 1 || year < 0) {
    	printf("Nhap sai! Nhap lai thang: ");
    	while (getchar() != '\n');
	}
	
    printf("Thang %d nam %d co %d ngay.", month, year, get_days_in_month(month, year));
    return 0;
}