#include <stdio.h>

int main()
{
    int time, hour, minutes;

    do
    {
        printf("Input a time: ");
        scanf("%d", &time);

        if (time <= 2400)
        {
            break;
        }
        else
            printf("\nInput the correct format.\n\n");
    } while (time > 2400);

    hour = time / 100;
    minutes = time % 100;

    (time >= 1300) ? hour -= 12 : hour;

    if (time <= 2400)
    {
        if (minutes <= 9)
        {
            (time < 1159 || time == 1200) ? printf("%d:0%d AM", hour, minutes) : printf("%d:0%d PM", hour, minutes);
        }
        else if (minutes == 0)
        {
            (time < 1159 || time == 1200) ? printf("%d:00 AM", hour) : printf("%d:00 PM", hour);
        }
        else
        {
            (time < 1159 || time == 1200) ? printf("%d:%d AM", hour, minutes) : printf("%d:%d PM", hour, minutes);
        }
    }
}
