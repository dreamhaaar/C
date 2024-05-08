#include <stdio.h>

void fun(int num)
{
    num = num + 1;
}

int main()
{
    int num = 10;
    fun(num);
    printf("%d", num);
}