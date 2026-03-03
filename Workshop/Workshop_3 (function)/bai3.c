#include <stdio.h>

float calculate_salary(float hours, float rate) {
    float salary;
    if(hours <= 40) {
        salary = hours * rate;
    } else {
        salary = 40 * rate + (hours - 40) * 1.5 * rate;
    }
    return salary;
}

int main() {
    float hours, rate;
    
    printf("Nhap gio lam: ");
    while(scanf("%f", &hours) != 1 || hours < 0) {
    	printf("Nhap sai! Nhap lai gio lam: ");
    	while (getchar() != '\n');
	}
	
    printf("Nhap so tien trong 1 tieng lam: ");
    while(scanf("%f", &rate) != 1 || rate < 0) {
    	printf("Nhap sai! Nhap lai so tien trong 1 tieng lam: ");
    	while (getchar() != '\n');
	}
    
	printf("Tien luong: %.2f", calculate_salary(hours, rate));
    return 0;
}
