#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  float a, b;
  float result;
  int invalid = 0;

  if(scanf("%f %f", &a, &b) != 2) {
    invalid = 1;
  }

  result = cbrt(pow(a, 2) + pow(b, 2));
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  if(invalid == 1) {
    printf("Invalid input");
  } else {
    printf("%.2f", result);
  }
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
