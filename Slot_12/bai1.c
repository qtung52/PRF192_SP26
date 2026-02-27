#include <stdio.h>

int tinhUS(int n) {
    int tong = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            tong += i;
        }
    }
    return tong;
}

int nhapInt() {
    int soInt;
    printf("Nhap so int: ");
    while(scanf("%d", &soInt) != 1 || soInt <= 0) {
        printf("Nhap sai! \nNhap lai: ");
        while(getchar() != '\n'); 
    }
    return soInt;
}

int main() {
    int n;
    
    n = nhapInt();
    
    printf("Tong uoc so của %d la: %d\n", n, tinhUS(n));
    
    return 0;
}