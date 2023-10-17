#include <stdio.h>

unsigned cooking_time(unsigned eggs)
{
    int time;
    time = 0;

    while(eggs > 8)
    {
        eggs -= 8;
        time += 5;
    }

    if(eggs > 0 && eggs <= 8)
    {
        time += 5;
    }

    return time;
}

int main()
{
    unsigned eggs;
    eggs = 10;
    cooking_time(eggs);
    return 0;
}