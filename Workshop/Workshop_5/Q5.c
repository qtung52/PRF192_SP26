#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int countString(char str[], char find) {
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] == find) {
			count++;
		}
	}
	return count;
}

void replaceString(char str[], char find, char replace) {
	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] == find) {
			str[i] = replace;
		}
	}
}

int main() {
  system("cls");
  printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	char str[101];
	char find, replace;
	
	if (fgets(str, sizeof(str), stdin)) {
    str[strcspn(str, "\n")] = 0;
  }
  
  scanf("%c %c", &find, &replace);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	
	int count = countString(str, find);
	
	printf("%d\n", count);
	
	if(count != 0) {
		replaceString(str, find, replace);
	}
	
	for(int i = 0; str[i] != '\0'; i++) {
		printf("%c", str[i]);
	}
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
