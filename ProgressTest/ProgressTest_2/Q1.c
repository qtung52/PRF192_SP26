#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	
	int n;
	scanf("%d", &n);
	
	int arr[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
	int flag = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] % 2 == 0) {
			printf("%d ", i);
			flag = 1;
		}
	}
	
	if(flag == 0) {
		printf("Not found");
	}

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
