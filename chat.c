#include <stdio.h>

int main(){
 int x = 10;
 int y = ++x;
 printf("%d %d\n", x, y);

 int a = 10;
 int b = a++;
 printf("%d %d", a, b);
}

