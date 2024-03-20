#include <stdio.h>

int leapyear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

void printleapyears(int startyear, int endyear)
{
    if (startyear > endyear)
        return;

    if (leapyear(startyear))
        printf("%d\n", startyear);

    printleapyears(startyear + 1, endyear);
}

int main()
{
    int start, end;

    printf("Enter start year: ");
    scanf("%d", &start);
    printf("Enter end year: ");
    scanf("%d", &end);

    printf("Leap years between %d and %d are:\n", start, end);
    printleapyears(start, end);

    return 0;
}
