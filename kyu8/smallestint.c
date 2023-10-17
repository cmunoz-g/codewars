#include <unistd.h>
#include <stdio.h>
//#include <stddef.h>

int find_smallest_int(const int array[4], int len ) //size_t len
{
    int hold;
    hold = array[len-1];

    while(len != 0)
    {
        if(hold>array[len-2])
        {
            hold = array[len-2];
        }

        len--;
    }

    return hold;
}

int main()
{
    int len = 6;
    const int array[6] = {5, 234, -23, 4, 0, -24};
    
    //size_t len = 3;

    find_smallest_int(array,len);

    return 0;
}