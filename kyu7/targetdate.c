#include <stdio.h>

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
    int i = counter(a0, a, p);
    int j = 0;
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int date0[3] = {2016, 1, 1};

    printf("%d \n", i);

    while(i >= 365)
    {
        if((date0[0] % 4 == 0 && date0[0] % 100 != 0) || (date0[0] % 400 == 0))
            i--;

        date0[0]++;
        i -= 365;
    }

    while (i > 31) 
    {
        date0[1]++;
        i -= months[j];
        j++;
    }
        
    date0[2] += i;

    printf("%d--0%d--0%d", date0[0], date0[1], date0[2]);

    //mirar GPT para ver como retornar esta mierda


    return dateNbDays;
}

int main()
{
    double a0;
    double a;
    double p;
    
    a0 = 100;
    a = 101;
    p = 0.98;

    dateNbDays(a0,a,p);
    return 0;
}