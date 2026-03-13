#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void descendingSort(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    for(int j = i + 1; j < size; j++) {
      if(arr[j] > arr[i]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

void displayArray(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    printf("%d\n", arr[i]);
  }
}

void findEvenNumber(int arr[], int size, int result[]) {
  int count = 0;

  for(int i = 0; i < size; i++) {
    if(arr[i] % 2 == 0) {
      result[count] = arr[i];
      count++;
    }
  }

  descendingSort(result, count);

  displayArray(result, count);
}

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n;
  scanf("%d", &n);
  
  if(n < 0) {
    printf("OUTPUT:\n");
    printf("Invalid input\n");
  } else {
    int arr[n];
    int result[n];
  
    for(int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

  	// Fixed Do not edit anything here.
    printf("OUTPUT:\n");
  
    findEvenNumber(arr, n, result);
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
