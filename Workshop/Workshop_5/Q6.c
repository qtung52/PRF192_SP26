#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void sortAtoZ(char name[10][101], int n) {
	char temp[101];
	for(int i = 0; i < n-1; i++){
    for(int j = i+1; j < n; j++){
      if(strcmp(name[i], name[j]) > 0){
      	strcpy(temp, name[i]);
        strcpy(name[i], name[j]);
        strcpy(name[j], temp);
      }
    }
  }
}

int main() {
  system("cls");
  printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	
	int n;
	scanf("%d", &n);
	
	char name[10][101];

	for(int i = 0; i < n; i++) {
		scanf("%s", &name[i]);
	}
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	sortAtoZ(name, n);

	for(int i = 0; i < n; i++) {
		printf("%s\n", name[i]);
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
