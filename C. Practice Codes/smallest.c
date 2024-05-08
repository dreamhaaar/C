#include <stdio.h>

int main()
{
    int num[3], checker;

    for (int i = 0; i < 3; i++){
        printf("Input number %d: ", i + 1);
        scanf("%d", &num[i]);}
        
    checker = (num[0] < num[1] && num[0] < num[2]) ? num[0] : ((num[1] < num[0] && num[1] < num[2]) ? num[1] : (num[2] < num[1] && num[2] < num[0]) ? num[2] : 0);
    printf("%d is the smallest number.", checker);
}