#include <stdio.h>

int main()
{
    int date0[3] = {2016, 1, 1};
    char formatedstring[10];
    int k = 0;

    char year[5];
        year[0] = date0[0] / 1000 + '0';
        year[1] = (date0[0] / 100) % 10 + '0';
        year[2] = (date0[0] / 10) % 10 + '0';
        year[3] = date0[0] % 10 + '0';
        year[4] = '\0';

    char month[3];
        if (date0[1] <= 9)
        {   month[0] = '0';
            month[1] = date0[1] + '0';
            month[2] = '\0';
        }
        else 
        {
            month[0] = (date0[1] / 10) + '0';
            month[1] = (date0[1] % 10) + '0';
            month[2] = '\0';
        }

    char day[3];
        if (date0[2] <= 9)
        {   day[0] = '0';
            day[1] = date0[2] + '0';
            day[2] = '\0';
        }
        else 
        {
            day[0] = (date0[2] / 10) + '0';
            day[1] = (date0[2] % 10) + '0';
            day[2] = '\0';
        }
    
    while(year[k])
    {
        formatedstring[k] = year[k];
        k++;
    }
    
    formatedstring[4] = '-';
    formatedstring[5] = month[0];
    formatedstring[6] = month[1];
    formatedstring[7] = '-';
    formatedstring[8] = day[0];
    formatedstring[9] = day[1];
    formatedstring[10] = '\0';

    printf("%s", formatedstring);

    return 0;
        
}