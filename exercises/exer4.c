#include <stdio.h>

int main()
{
    /* Write a C program to find the largest of three numbers.*/

    int numbers[3], max = 0 , m;
    for (int i = 0; i < 3; i++)
    {
        printf("Input number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    if (numbers[0] > numbers[1] && numbers[0] > numbers[2])
    {
    
        max += 1;
        m = numbers[0];
    }

    else if (numbers[1] > numbers[0] && numbers[1] > numbers[2])
    {
      
        max += 1;
        m = numbers[1];
    }

    else if (numbers[2] > numbers[0] && numbers[2] > numbers[1])
    {
       
        max += 1;
        m = numbers[2];
    }

    else if  (numbers[0] ==  numbers[1] || numbers[0] == numbers[2])
    {
        max += 1;
        m = numbers[0];
    }

      else if  (numbers[1] ==  numbers[2] || numbers[1] ==  numbers[2])
    {
        max += 1;
        m = numbers[1];
    }
      else if  (numbers[2] ==  numbers[0] || numbers[2] ==  numbers[1])
    {
        max += 1;
        m = numbers[1];
    }

    if (max == 1)
    {
        printf("%d is the maximum number.", m);
    }
    
}