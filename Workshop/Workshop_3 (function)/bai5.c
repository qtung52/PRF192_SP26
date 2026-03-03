#include <stdio.h>

int is_prime(int n) {
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int a, b;
    
    printf("Nhap a: ");
    while(scanf("%d", &a) != 1) {
    	printf("Nhap sai! Nhap lai a: ");
    	while (getchar() != '\n');
	}
    
	printf("Nhap b: ");
    while(scanf("%d", &b) != 1) {
    	printf("Nhap sai! Nhap lai b: ");
    	while (getchar() != '\n');
	}

    for(int i = a; i <= b; i++) {
        if(i % 2 == 0 && i != 2) {
            continue;
        }

        if(is_prime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
