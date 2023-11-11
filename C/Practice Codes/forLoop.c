#include <stdio.h>
int main()
{
 int a [3];
 int sum;
  
  for (int i = 1; i <= 3; i++)
  {
    printf("Input number %d: ", i);
    scanf("%d", &a[i]);
    sum = a[1] + a[2] + a[3];
  }
  printf("\nThe sum is %d", sum);
  return 0;
}