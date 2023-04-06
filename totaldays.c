#include<stdio.h>
int main()
    {
        int totaldays, year, month, days;
        printf("Enter the total number of days: ");
        scanf("%d", &totaldays);
        year = totaldays / 365;
        month = (totaldays % 365) / 30;
        days = (totaldays % 365) % 30;
        printf("Year: %d, Month:%d, days:%d", year, month,days);



    }