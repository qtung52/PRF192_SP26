#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int checkSpace(char str[]) {
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] == ' ') {
			count++;
		}
	}
	return count;
}

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

	int kq = checkSpace(str);
	
	printf("%d", kq);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
