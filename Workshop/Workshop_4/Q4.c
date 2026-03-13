#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void process(int arr[], int n) {
  int found = 0;

  for(int i = 0; i < n; i++) {
    if(arr[i] % 2 == 0){
      int check = 0;
      //Kiểm tra có suất hiện trc đó chưa nếu suất hiện rồi thì break
      for(int j = 0; j < i; j++) {
        if(arr[j] == arr[i]) {
          check = 1;
          break;
        }
      }

      if(check == 0) {
        int count = 0;
        //Đếm các số giống nhau theo thứ tự nhập vào
        for(int j = 0; j < n; j++) {
          if(arr[j] == arr[i]) {
            count++;
          }
        }

        printf("%d-%d\n", count, arr[i]);
        found = 1;
      }
    }
  }

  if(found == 0) {
    printf("Not found\n");
  }
}

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
  printf("OUTPUT:\n");
  
  process(arr, n);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
