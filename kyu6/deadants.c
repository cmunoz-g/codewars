#include <stdio.h>

int deadAntCount(const char* ants)
{
    int aliveants = 0;
    int a = 0;
    int n = 0;
    int t = 0;

    int i = 0;

    while(ants[i+2]) {
        if(ants[i] == 'a' && ants[i+1] == 'n' && ants[i+2] == 't')
            aliveants++;
        i++;
    }
    
    i = 0;

    while(ants[i]) {
        if(ants[i] == 'a')
            a++;
        else if(ants[i] == 'n')
            n++;
        else if(ants[i] == 't')
            t++;
        i++;
    }

    if(a+n+t % 3 == 0)
        return a = ((a+n+t)/3) - aliveants;

    else
        if ((a>n && a>t) || (a == n && a>t))
            return a -= aliveants;
        else if ((n>a && n>t) || (n == t && n>a))
            return n -= aliveants;
        else if ((t>a && t>n) || (t == a && t<a) )
            return t -= aliveants;
}

int main(){
    const char* ants = "ant anantt aantnt";
    deadAntCount(ants);
    return 0;
}