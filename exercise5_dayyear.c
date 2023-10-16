#include <stdio.h>

int get_day_of_year (const int date[3])
{
    int day;
    day = 0;

    int monthcount;
    monthcount = date[1] - 1;

    while (monthcount != 0)
    {
        if (monthcount == 1 || monthcount == 3 || monthcount == 5 || monthcount == 7 || monthcount == 8 || monthcount == 10 || monthcount == 12)
        {
            day = day + 31;
        }

        else if(monthcount == 2)
        {
            if ((date[2] % 4 == 0 && date[2] % 100 != 0) || (date[2] % 400 == 0))
            {
                day = day + 29;
            }
            else 
            {
                day = day + 28;
            }
        }
        
        else
        {
            day = day + 30;
        }

        monthcount--;
        
    }

    day = day + date[0];

    printf("%d", day);

    return day;
}

int main()
{
    const int date[3] = {22, 10, 1990};
    get_day_of_year(date);

    return 0;
}