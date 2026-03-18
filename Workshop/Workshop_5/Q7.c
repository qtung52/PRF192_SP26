#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	char str[101];

	if (fgets(str, sizeof(str), stdin)) {
    str[strcspn(str, "\n")] = 0;
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	
	int countDigits = 0;
	int countLetters = 0;
	int countOtherChar = 0; 

	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] >= '0' && str[i] <= '9') {
			countDigits++;
		} else if((str[i] >= 'a' && str[i] <= 'z')
						|| (str[i] >= 'A' && str[i] <= 'Z')) {
			countLetters++;
		} else {
			countOtherChar++;
		}
	}
	
	printf("%d\n", countDigits);
	printf("%d\n", countLetters);
	printf("%d", countOtherChar);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
