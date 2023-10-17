#include <stdio.h>

char modified(const char *clrs, int length)
{
    int j = 0;
    char modifiedcopy[length];

    while(clrs[j])
    {
        modifiedcopy[j] = clrs[j];
        j++;
    }

    modifiedcopy[j] = clrs[j];

    return modifiedcopy;
}

int longitud(const char *clrs)
{
    int length = 0;

    while(clrs[length])
        length++;

    return length;
}
// antes de irme, hay que utilizar la variable modifiedcopy in el segundo while para que cada vez que se ejecute, el string sea diferente (con un caracter menos) hasta que solo quede 1.


char triangle(const char *clrs)
{
    const char *copy = clrs;

    int i = 0;
    int length = longitud(clrs);

    char letraf[length];
    char modifiedcopy = modified(clrs, length);

    while(letraf[1] != '\0')
    {
        while(copy[i])
        {
            if (copy[i] == copy[i+1])
                letraf[i] = copy[i];

            else if((copy[i] == 'R' && copy[i+1] == 'G') || (copy[i] == 'G' && copy[i+1] == 'R'))
                letraf[i] = 'B';

            else if((copy[i] == 'G' && copy[i+1] == 'B') || (copy[i] == 'B' && copy[i+1] == 'G'))
                letraf[i] = 'R';

            else if ((copy[i] == 'B' && copy[i+1] == 'R') || (copy[i] == 'R' && copy[i+1] == 'B'))
                letraf[i] = 'G';
        
            i++;
        }

        i = 0;

        printf("%s \n", letraf);

        letraf[length] = '\0';
        length--;
    }

    printf("%s", letraf);

    return letraf[0];
}

int main()
{
    const char *clrs = "RGRRB";
    triangle(clrs);
    return 0;
}