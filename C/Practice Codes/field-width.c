#include <stdio.h>

int main(){




    /*
      double a= 7878.123;
    double b= 567.43945;
    double c= 567.43945;
    int d = 12345;
    int e = 12345;
    int f = 12345;
    

    printf("%05lf\n",a);
    printf("%-2lf\n",b);
    printf("%014lf",c);
    printf("%-5d\n",d);
    printf("%.2d\n",e);
    printf("%014d",f);
    */
   int a=1;
   int b=12;
   int c=123;
   int d=1234;
   int e=12345;
   float g = 12354.6565;
   char name[15]="Andrea";
   int num2 = 1234;
    printf("%07d\n", num2);

   printf("%5.4s\n", name);
   printf("%5d\n", a);
   printf("%1.2d   %d\n", b, b);
   printf("%02d   %d\n", c, c);
   printf("%02d   %d\n", d, d);
   printf("%02d   %d\n", e, e);
   printf("%3.2lf\n", g);
   printf("%-1d\n", d);
   printf("%-1d\n", c);
   double num1 = 123.4333;
   printf("%1.2lf\n", num1);

   int epal = 1234355;
   printf("\n%2d", epal);

   /*

conclusion:
in floats, doubles, and strings the number before the point, eg. 1.2; the first number does not matter. 
the number after the period is what matters. in floats and doubles, it will still print all the numbers before the point.

   eg. double num1 = 123.4567;
   printf("%1.2lf", num1);

   it's output would be:
   123.46 (rounded off by the computer)

while in strings, the number before the period won't print the characters. 
    eg. char name[10]="Makima"; 
    if precision specifier is 1.2 then
    printf("%1.2s", name);

    it's output would be:
    Ma

    precision specifier
    - used in integers, floats, doubles, and strings
    - used to determine the decimal places for floating-point numbers
    - used to specify maximum field width for integers or strings.
    
    in integers and characters, if the value is < the field width, it will create zeros or spaces before it. 

    spaces:
    eg. int num1 = 1234;
    printf("%7d", num1);

    it's output would be:
       1234
    
    zeros:
    eg. int num1 = 1234;
    printf("%07d", num1);

    it's output would be:
    0001234

   */


 
}