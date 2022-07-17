#include <stdio.h>
int main()
{
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, j, total_days, week_day = 0, space_counter = 0, year;
    printf("Enter Your Year\n");
    scanf("%d", &year);
    printf("\n***************** Welcome To Year %d ***********************\n", year);

    // check leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        days_in_month[1] = 29;
    }
    for (i = 0; i < 12; i++)
    {
        printf("\n\n\n-----------------------%s ------------------------\n\n", months[i]);
        printf("\n   Sun   Mon   Tue   Wed  Thu   Fri   Sat\n\n");

        for (space_counter = 1; space_counter <= week_day; space_counter++)
        {
            printf("      ");
        }
        total_days = days_in_month[i];
        for (j = 1; j <= total_days; j++)
        {
            printf("%6d", j);
            week_day++;
            if (week_day > 6)
            {
                week_day = 0;
                printf("\n");
            }
        }
    }
    return 0;
}