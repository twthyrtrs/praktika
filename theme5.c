#include <stdio.h>

int main(void)
{
    int day = 1, tab = 1;
    int sum = 0;
    while (tab <= 20) {
        sum += tab;
        printf("day: %d, tab: %d, sum: %d", day, tab, sum);
        printf("\n");
        tab++;
        day++;
    }

    return 0;
}

