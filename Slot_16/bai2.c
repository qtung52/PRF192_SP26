#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int isVowel(char kyTu) {
	kyTu = tolower(kyTu);
	
	if(kyTu == 'u' || kyTu == 'e' || kyTu == 'o' || kyTu == 'a' || kyTu == 'i') return 1;
	
	return 0;
}

int countVowel(char *str) {
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++) {
		if(isVowel(str[i]) == 1) {
			count++;
		}
	}
	return count;
}

int main() {
  system("cls");
	
	char *str = (char *)malloc(50 * sizeof(char));		//Cấp phát vùng nhớ // sử dụng // giải phóng

	if (fgets(str, 50, stdin)) {
    str[strcspn(str, "\n")] = 0;
  }
  /*Dùng cái trên hoặc dùng:
  - fgets(str, sizeof(str), stdin*/
	
	printf("%d\n", countVowel(str));
	
	free(str);

  system ("pause");
  return(0);
}
