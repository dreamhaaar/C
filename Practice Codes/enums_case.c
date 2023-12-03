#include <stdio.h>

enum Level {
  LOW = 2,
  MEDIUM,
  HIGH
};

int main() {
  
  int myvar;
  
  printf("Enter a number 1-3. ");
  scanf("%d", &myvar);
  
  switch (myvar) {
    case 2:
      printf("Low Level");
      break;
    case 3:
      printf("Medium level");
      break;
    case 4:
      printf("High level");
      break;
  }
   
  return 0;
}