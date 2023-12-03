#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{

  char room;
  double temp1, temp2;

  printf("Is the room in C or F? ");
  scanf("%c", &room);
  room = toupper(room);

  if (room == 'C')
  {
    printf("What is the temperature in C? ");
    scanf("%lf", &temp1);
    double value2 = (1.8 * temp1) + 32;
    printf("The equivalent temperature in F is %.2lf", value2);
  }

  else if (room == 'F')
  {
    printf("What is the temperature in F? ");
    scanf("%lf", &temp2);
    double value = (temp2 - 32) / 1.8;
    printf("The equivalent temperature in C is %.2lf", value);
  }
  else
  {
    printf("%c is not a valid type of measurement. ", room);
  }
}