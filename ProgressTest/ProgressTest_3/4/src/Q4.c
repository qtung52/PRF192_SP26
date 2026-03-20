#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int findLargestEvenNumber(int arr[], int n) {
	int max = INT_MIN;
	for(int i = 0 ; i < n; i++) {
		if(arr[i] % 2 == 0) {
			max = arr[i];
			if(arr[i] > max) {
				max = arr[i];
			}
		}
	}
	return max;
}

int main() {
  system("cls");
  printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int n,flag = 0;
	if(scanf("%d", &n) != 1 || n <= 0) {
		flag = 1;
	}
	
	if(flag) {
		printf("\nOUTPUT:\n");
		printf("-1");
		return 0;
	}
	
	int arr[n];
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	int kq = findLargestEvenNumber(arr, n);
	
	if(kq == INT_MIN) {
		printf("There are no even number in %d elements.", n);
	} else {
		printf("%d", kq);
	}
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
