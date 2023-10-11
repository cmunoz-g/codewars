#include <stdio.h>
#include <unistd.h>

void neutralize (const char *s1, const char *s2, char *s3)
{
  while(*s1 != '\0')
  {
    if(*s1 == *s2 && *s1 == '+')
    {
        *s3 = '+';
    }

    else if(*s1 == *s2 && *s1 == '-')
    {
        *s3 = '-';
    }

    else
    {
        *s3 = '0';
    }

    s1++;
    s2++;
    s3++;

  }

  *s3 = '\0';

}

int main()
{
    const char *s1 = {"+--+-"};
    const char *s2 = {"--++-"};
    char s3[5];

    neutralize(s1,s2,s3);
    printf("%s\n", s3);

    return(0);

}