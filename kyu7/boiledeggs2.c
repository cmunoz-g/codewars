#include <stdio.h>

unsigned cooking_time(unsigned eggs)
{
    int time;
    time = 0;

    time = ((eggs/8) * 5);
    if(eggs % 8 != 0)
    {
        time += 5;
    }

    return time;
}

int main()
{
    unsigned eggs;
    eggs = 1999;
    cooking_time(eggs);
    return 0;
}