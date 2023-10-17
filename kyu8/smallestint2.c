#include <stddef.h>

int find_smallest_int(const int vec[], size_t len ) 
{
    int hold;
    hold = vec[len-1];

    while(len != 0)
    {
        if(hold>vec[len-2])
        {
            hold = vec[len-2];
        }

        len--;
    }

    return hold;
}

/*int main()
{
    size_t len = 6;
    const int array[6] = {5, 234, -23, 4, 0, -24};

    find_smallest_int(array,len);

    return 0;
}*/