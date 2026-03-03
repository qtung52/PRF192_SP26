#include <stdio.h>

void show_menu() {
    printf("=============================\n");
    printf("    ---Menu Calculator---\n");
    printf("=============================\n");
    printf("[+] Phep Cong\n");
    printf("[-] Phep Tru\n");
    printf("[*] Phep Nhan\n");
    printf("[/] Phep Chia\n");
    printf("[0] Thoat chuong trinh\n");
    printf("Chon: ");
}

float processor(float a, float b, char choice) {
    switch(choice) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
}

int main() {
    float a, b;
    char choice;

    while(1) {
        show_menu();
        
        if (scanf(" %c", &choice) != 1) {
            printf("Nhap sai! Vui long nhap lai.\n");
            while (getchar() != '\n');
            continue;
        }
        
        while(getchar() != '\n');

        if (choice == '0') {
            printf("Thoat chuong trinh.\n");
            return 0;
        }
        
        if (choice == '+' || choice == '-' ||
            choice == '*' || choice == '/') {
            break;
        }

        printf("Nhap sai! Vui long nhap lai.\n");
    }

    printf("Nhap a: ");
    while(scanf("%f", &a) != 1) {
    	printf("Nhap sai! Nhap lai a: ");
    	while (getchar() != '\n');
	}
    
	printf("Nhap b: ");
    while(scanf("%f", &b) != 1) {
    	printf("Nhap sai! Nhap lai b: ");
    	while (getchar() != '\n');
	}
	
	if(choice == '/' && b == 0) {
		printf("Ko chia dc cho 0.");
	} else {
    	printf("Ket qua la: %.2f", processor(a, b, choice));
	}
	
    return 0;
}
