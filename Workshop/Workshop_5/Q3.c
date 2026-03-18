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

	int len = strlen(str);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	int check = 1;
	
	for(int i = 0; i < len/2; i++) {
		if(str[i] != str[len-1-i]) {
			check = 0;
			break;
		}
	}
	
	if(check) {
		printf("Yes");
	} else {
		printf("No");
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
