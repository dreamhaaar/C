/*#include <stdio.h>
#include <conio.h>

int main(){

//*int num1;
scanf("%d", &num1);
printf("\n%d", num1);

char name[255];
gets(name);
printf("\n%s", name);
*/
/*puts("\nHello World!");
putchar('A');
printf("The value of %5d is five.",5);
printf("\n %5d %6.2f", 6 ,6.5);
printf("\\Then followed by %d.", 7);
*/
/*char y;
y= getche();
printf("%s", y);
*/
// int x;
// scanf("%3d", &x);
// printf("%d", x);
// }
/*#include <stdio.h>
#include <conio.h>  // For getch() on Windows (conio.h is not standard, and alternatives should be used)

int main() {
    char ch;

    printf("Press any key: ");

    ch = getchar();  // Read a character without echoing

    printf("\nYou pressed: %c\n", ch);

    return 0;
}
*/

#include <stdio.h>

int main()
{
    int x = 50, y = 120, diff = 0, sum = 0;
    if (x == 50)
        if (y >= 120)
        {
            sum = x + y;
            printf("the sum of x and y is %d", sum);
        }
        else
        {
            diff = x - y;
            printf("the difference between x and y is %d", diff);
        }
    else
        printf("Next time");
}