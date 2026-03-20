#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void swapArray(int arr[], int n) {
	int max = INT_MIN;
	int min = INT_MAX;
	int coMax = 0;
	int coMin = 0;
	for(int i = 0; i < n; i++) {
		
		if(arr[i] % 2 == 0) {
			if(arr[i] > max) {
				max = arr[i];
				coMax = i;
			} 
			if(arr[i] < min) {
				min = arr[i];
				coMin = i;
			}
		}
	}
	if(coMin != 0 || coMax != 0) {
		int temp = arr[coMax];
		arr[coMax] = arr[coMin];
		arr[coMin] = temp;
	}
	
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
  system("cls");
  printf("\nINPUT:\n");
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

	swapArray(arr, n);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
