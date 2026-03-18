#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("\nINPUT:\n");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	
	char input[101];
	
	if (fgets(input, sizeof(input), stdin)) {
  	input[strcspn(input, "\n")] = 0;
  }
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  int count = 0;
  for(int i = 0; input[i] != '\0'; i++) {
  	count++;
	}
	
	printf("%d", count);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
