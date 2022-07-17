#include <stdio.h>
int main()
{
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int i;
    for (i = 0; i < 12; i++)
    {
        printf("\n-----------------------%s -------------------------\n", months[i]);
        printf("\n    Sun    Mon    Tue    Wed   Thu    Fri    Sat\n\n");
    }
    return 0;
}