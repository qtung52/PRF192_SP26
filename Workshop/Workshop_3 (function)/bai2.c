#include <stdio.h>

float calculate_tazi_fare(float distance) {
    int money;
    if(distance <= 1) {
        money = 15000;
    } else if(distance <= 30) {
        money = 15000 + (distance - 1)*12000;
    } else {
        money = 15000 + 29*12000 + (distance - 30)*10000;
    }
    return money;
}

int main() {
    float distance;
    
    printf("Nhap so Km: ");
    while(scanf("%f", &distance) != 1 || distance <= 0) {
    	printf("Nhap sai! Nhap lai so Km: ");
    	while (getchar() != '\n');
	}
	
    printf("So tien phai tra la: %.2f", calculate_tazi_fare(distance));
    return 0;
}
