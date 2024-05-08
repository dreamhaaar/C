#include <stdio.h>

int main()
{

    int sorted[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int n;

    printf("Input a number to search: ");
    scanf("%d", &n);

    int l = 0;
    int r = 9;
    int a;

    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (sorted[m] == n)
        {
            a = m;
            break;
        }
        else if (n > sorted[m])
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    printf("Index: %d", a);


}
