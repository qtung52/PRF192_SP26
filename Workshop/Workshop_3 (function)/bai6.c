#include <stdio.h>
#include <stdlib.h> // Thư viện để dùng rand() và srand()
#include <time.h>   // Thư viện để lấy thời gian hệ thống

int random_number() {	
	srand(time(NULL));
	//Công thức tổng quát: min + rand() % (max - min + 1)
	return 1 + rand() % (100 - 1 + 1);	//Tạo ra một số ngẫu nhiên từ 1 đến 100
}

void play_game() {
    int randomNumber = random_number();
    int guess;
    int attempts = 0;
    const int maxAttempt = 7;
    while(attempts < maxAttempt) {
        printf("Luot doan thu %d. Nhap so: ", attempts + 1);
        if(scanf("%d", &guess) != 1) {
            printf("Nhap sai (khong mat luot).\n");
            while(getchar() != '\n');
            continue;
        }
        
        if(guess < 1 || guess > 100) {
            printf("Vui long nhap so trong khang [1, 100] (khong mat luot).\n");
            continue;
        }

        attempts++;

        if(guess == randomNumber) {
            printf("Chuc mung ban da doan dung");
            break;
        }
        else if(guess > randomNumber) {
            printf("Nho hon\n");
        } else {
            printf("Lon hon\n");
        }

        if(attempts == maxAttempt) {
            printf("Ban da het luot. So can tim la: %d", randomNumber);
        }
    }
}

int main() {
    play_game();
    return 0;
}
