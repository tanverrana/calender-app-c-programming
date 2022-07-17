#include <stdio.h>
int main()
{
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, j, total_days;
    for (i = 0; i < 12; i++)
    {
        printf("\n-----------------------%s ------------------------\n", months[i]);
        printf("\n    Sun    Mon    Tue    Wed   Thu    Fri    Sat\n\n");
        total_days = days_in_month[i];
        for (j = 1; j <= total_days; j++)
        {
            printf("%5d", j);
        }
    }
    return 0;
}