#include <stdio.h>
#include <stdlib.h>

int counter(double a0, double a, double p)
{
    int i = 0;
    while (a0 < a)
    {
        a0 = a0 + ((p/36000) * a0);
        i++;
    }

    return i;
}

char* dateNbDays(double a0, double a, double p) 
{
    int i = counter(a0, a, p)-1;
    int j = 0;
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int date0[3] = {2016, 1, 1};

    while(i >= 365)
    {
        date0[0]++;
        if((date0[0] % 4 == 0 && date0[0] % 100 != 0) || (date0[0] % 400 == 0))
            i--;
        i -= 365;
    }

    if((i <= 59) && ((date0[0] % 4 == 0 && date0[0] % 100 != 0) || (date0[0] % 400 == 0)))
        i++;

    while (i >= 31) 
    {
        date0[1]++;
        i -= months[j];
        j++;
    }
        
    date0[2] += i;

    char* formattedDate = (char*)malloc(11 * sizeof(char));

    if (formattedDate == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    sprintf(formattedDate, "%d-%02d-%02d", date0[0], date0[1], date0[2]);

    printf("%s", formattedDate);

    return formattedDate;
}

int main()
{
    double a0;
    double a;
    double p;
    
    a0 = 100;
    a = 101;
    p = 0.98;

    char* result = dateNbDays(a0,a,p);
    free(result);

    return 0;
}