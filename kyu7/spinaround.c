#include <stdio.h>
#include <stddef.h>

enum Direction { LEFT, RIGHT };

size_t count_rotations (size_t n, const enum Direction directions[n])
{
    size_t rotations = 0;
    int counter = 0;

    int i = n-1;

    while (i >= 0) {
        if (directions[i] == RIGHT)
            counter += 90;

        if(directions[i] == LEFT)
            counter -= 90;
    
        i--;
    }
 
    if (counter<0)
        rotations = (counter*-1)/360;
    else
        rotations = counter/360;

	return rotations;
}

int main()
{
    size_t n = 4;
    const enum Direction directions[4] = {LEFT,LEFT,LEFT,LEFT};

    size_t rotations = count_rotations(n,directions);
    printf("%ld", rotations);

    return 0;
}