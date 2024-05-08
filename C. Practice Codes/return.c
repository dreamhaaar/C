#include <stdio.h>

// function prototype
void sumer(int);

int main()
{
    int sum = 0;
    sumer(sum);
}

void sumer(int sum)
{
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
        printf("%d ", sum);
    }
}
