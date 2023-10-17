#include <unistd.h>
#include <stdio.h>
#include <string.h>

/* remember to null-terminate outp! */

char *get_middle(char outp[3], const char *inp)
{
    int number;
    number = 0;

    const char *copy = inp;

    while(*copy != 0)
    {
        number++;
        copy++;
    }

    if(number % 2 == 0)
    {
        outp[0] = inp[(number/2)-1];
        outp[1] = inp[(number/2)];
        outp[2] = '\0';
    }

    else
    {
        outp[0] = inp[(number)/2];
        outp[1] = '\0';
        outp[2] = '\0';
    }


    printf("%s", outp);

    return outp;

}

int main()
{   
    char outp[3];
    const char *inp = "cccccaccccc";

    get_middle(outp, inp);

    return 0;

}